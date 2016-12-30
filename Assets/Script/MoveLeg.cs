using UnityEngine;
using System.Collections;

public class MoveLeg : MonoBehaviour {

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

	public int mode; // 0: artificial 1: random 2: machine learning

	void Start()
	{
		board = GameObject.FindGameObjectWithTag ("board");

		initialDegree = this.transform.localEulerAngles.z;
		initialX = board.transform.position.x;
		initialY = board.transform.position.y;

		triggerTime = -1;

		// initial reward
		//QLearning.initial ();

		previousState = formalState ();
	}

	void FixedUpdate()
	{
		if (mode==2 && Input.GetKey (KeyCode.W))
			QLearning.WriteQdata ();

		triggerTime++;
		if (triggerTime % gapTime != 0)
			return;
		else
			triggerTime %= gapTime;

		float moveHorizontal = 0;

		if (mode == 0)
			moveHorizontal = Input.GetAxis ("Horizontal");
		if (mode == 1)
			moveHorizontal = Random.Range (-1, 1);

		if (moveHorizontal > 0)
			moveHorizontal = 1;
		if (moveHorizontal < 0)
			moveHorizontal = -1;

		if (mode == 2 && action >= 0) 
		{
			nextState = formalState ();

			if (nextState.x != previousState.x) {
				QLearning.updateQ (previousState, previousAction, nextState);
				update = true;
			}
				
			//QLearning.updateQ (currentState, action, nextState);
//			if (previousAction != -1)
//				QLearning.updateQ (previousState, previousAction, nextState);
//
//			previousState = currentState;
//			previousAction = action;
		}
			
		currentState = formalState ();
		if (mode == 2) 
		{
			if (update) 
			{
				action = QLearning.chooseAction (currentState);
				previousAction = action;
				previousState = currentState;
				update = false;
			}
			else
				action = QLearning.chooseAction (currentState);
			moveHorizontal = action == 0 ? -1 : 1;
		}

		transform.RotateAround (this.transform.position + new Vector3 (0, 1, 0), new Vector3 (0, 0, 10), 20 * moveHorizontal);// * Time.deltaTime);
	}

	State formalState()
	{
		int degree;
		int x;
		int y;

		if (this.transform.localEulerAngles.z < 180)
			degree = (int)(this.transform.localEulerAngles.z - initialDegree + QLearning.DegreeNum / 2);
		else
			degree = (int)(this.transform.localEulerAngles.z - 360 + QLearning.DegreeNum / 2);

		x = Mathf.RoundToInt((board.transform.position.x - initialX) / 0.1f + QLearning.Xnum / 2);
		y = Mathf.RoundToInt((board.transform.position.y - initialY+0.3f) / 0.1f);	// y is lower than intial value add 0.3 temp

		State state;
		state.x = x;
		state.y = y;
		state.degree = degree;

		state.energy = 0;

		return state;
	}
}
