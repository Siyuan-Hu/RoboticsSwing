using UnityEngine;
using System.Collections;

public class MoveBody : MonoBehaviour {

	public int mode;

	GameObject lap;
	Vector3 anchor;

	private float initialDegree;
	private float initialX;
	private float initialY;

	private State currentState;
	private State nextState;
	private State previousState;
	private int action = -1;
	private int previousAction = -1;
	bool update = true;

	private int triggerTime;
	private int gapTime = 1;

	private GameObject board;

	// Use this for initialization
	void Start () {
		lap = GameObject.FindGameObjectWithTag ("lap");
		//lap=this.gameObject;
		anchor = new Vector3 (-0.5f, 0, 0);
		//anchor = new Vector3 (0, -0.5f, 0);

		board = GameObject.FindGameObjectWithTag ("board");

		initialDegree = this.transform.localEulerAngles.z;
		initialX = board.transform.position.x;
		initialY = board.transform.position.y;

		triggerTime = -1;

		// initial reward
		if (mode == 2)
			QLearning_Body.initial ();

		previousState = formalState ();
	}
	
	// Update is called once per frame
	void FixedUpdate () {

		if (Input.GetKey (KeyCode.P)) 
		{
			print ("right:");
			string r = "";
			for (int i = 100; i < 150; i++)
				r += (QLearning_Body.Q [i, 1, 0, 0]>QLearning_Body.Q [i, 1, 0, 1]?1:0).ToString () + " ";
			print (r);
			r = "";
			for (int i = 100; i < 150; i++)
				r += ((int)QLearning_Body.Q [i, 1, 0, 0]).ToString () + " ";
			print (r);
			r = "";
			for (int i = 100; i < 150; i++)
				r += ((int)QLearning_Body.Q [i, 1, 0, 1]).ToString () + " ";
			print (r);
			r = "";

			print ("left:");
			string l = "";
			for (int i = 100; i > 50; i--)
				l += (QLearning_Body.Q [i, 0, 0, 1]>QLearning_Body.Q [i, 0, 0, 0]?1:0).ToString () + " ";
			print (l);
			l = "";
			for (int i = 100; i > 50; i--)
				l += ((int)QLearning_Body.Q [i, 0, 0, 1]).ToString () + " ";
			print (l);
			l = "";
			for (int i = 100; i > 50; i--)
				l += ((int)QLearning_Body.Q [i, 0, 0, 0]).ToString () + " ";
			print (l);
			l = "";
		}

		if (Input.GetKey (KeyCode.X)) 
		{
			print ("right:");
			string r = "push right:";
			r += QLearning_Body.Q [1, 1, 0, 1].ToString ();
			print (r);
			r = "push left:";
			r += QLearning_Body.Q [1, 1, 0, 0].ToString ();
			print (r);

			print ("left:");
			r = "push left:";
			r += QLearning_Body.Q [0, 0, 0, 0].ToString ();
			print (r);
			r = "push right:";
			r += QLearning_Body.Q [0, 0, 0, 1].ToString ();
			print (r);

			print ("middle right face left:");
			r = "push left:";
			r += QLearning_Body.Q [1, 0, 0, 0].ToString ();
			print (r);
			r = "push right:";
			r += QLearning_Body.Q [1, 0, 0, 1].ToString ();
			print (r);

			print ("middle left face right:");
			r = "push right:";
			r += QLearning_Body.Q [0, 1, 0, 1].ToString ();
			print (r);
			r = "push left:";
			r += QLearning_Body.Q [0, 1, 0, 0].ToString ();
			print (r);

		}

		if (mode==2 && Input.GetKey (KeyCode.B))
			QLearning_Body.WriteQdata ();

		triggerTime++;
		if (triggerTime % gapTime != 0)
			return;
		else
			triggerTime %= gapTime;

		float moveVertical = 0;

		if (mode == 0)
			moveVertical = Input.GetAxis ("Vertical");
		if (mode == 1)
			moveVertical = Random.Range (-1, 1);

		if (moveVertical > 0)
			moveVertical = 1;
		if (moveVertical < 0)
			moveVertical = -1;

		//moveVertical -1: right 1: left

		if (mode == 2 && action >= 0) 
		{
			nextState = formalState ();

			if (nextState.energy != previousState.energy) {
				QLearning_Body.updateQ (previousState, previousAction, nextState);
				update = true;
			}
		}

		currentState = formalState ();
		if (mode == 2) 
		{
			if (update) 
			{
				action = QLearning_Body.chooseAction (currentState);
				previousAction = action;
				previousState = currentState;
				update = false;
			}
			else
				action = QLearning_Body.chooseAction (currentState);
			moveVertical = action == 1 ? -1 : 1;
			// action 1: right 0: left
		}
//		if ((currentState.y == 1 && board.transform.position.x - initialX < 0)
//		    || (currentState.y == 0 && board.transform.position.x - initialX > 0))
//			moveVertical = 0;
//		moveVertical = 0;
//		if (currentState.y == 1 && board.transform.position.x - initialX > 0)
//			moveVertical = -1;
//		if (currentState.y == 0 && board.transform.position.x - initialX < 0)
//			moveVertical = 1;		
//		print (currentState.energy);
		//moveVertical = currentState.x == 1 ? -1 : 1;
		transform.RotateAround (lap.transform.position + anchor, new Vector3 (0, 0, 10), 10 * moveVertical);
	}

	State formalState()
	{
		int degree;
		int x;
		int y;

		if (this.transform.localEulerAngles.z < 180)
			degree = (int)(this.transform.localEulerAngles.z - initialDegree + QLearning_Body.DegreeNum / 2);
		else
			degree = (int)(this.transform.localEulerAngles.z - 360 + QLearning_Body.DegreeNum / 2);

		x = Mathf.RoundToInt((board.transform.position.x - initialX) / 0.1f + QLearning_Body.Xnum / 2);

		y = board.GetComponent<Rigidbody> ().velocity.x > 0 ? 1 : 0;

		State state;
		state.x = x;
		state.x = board.transform.position.x - initialX > 0 ? 1 : 0;
		//state.x = 0;
		state.y = y;
		degree = 0;
		state.degree = degree;

		Vector3 vel = board.GetComponent<Rigidbody> ().velocity;
		//state.degree = (int)Vector3.SqrMagnitude (vel);
		state.energy = (9.8f * (board.transform.position.y - initialY) + 0.5f * Vector3.SqrMagnitude (vel)) * 20;
		state.energy = (9.8f * Mathf.Abs (board.transform.position.x - initialX) + 0.0f * Vector3.SqrMagnitude (vel)) * 20;
		state.energy = Mathf.Asin (Mathf.Abs (board.transform.position.x - initialX) / 12) * 100;
		state.kineticEnergy = 0.5f * Vector3.SqrMagnitude (vel) * 20;

		return state;
	}
}
