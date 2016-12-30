using UnityEngine;
using System.Collections;

public class MoveRightLeg : MonoBehaviour {

	private Rigidbody rb;
	public float force;

	void Start()
	{
		rb = GetComponent<Rigidbody> ();
	}

	void FixedUpdate()
	{
		float moveHorizontal = Input.GetAxis ("Horizontal");
		if (moveHorizontal > 0)
			moveHorizontal = 1;
		if (moveHorizontal < 0)
			moveHorizontal = -1;

		transform.RotateAround(this.transform.position,new Vector3 (0,0,10*moveHorizontal),1000*Time.deltaTime);

		Vector3 direction = new Vector3 (moveHorizontal, 0.0f, 0.0f);

		rb.AddForce (direction*force);
	}

}
