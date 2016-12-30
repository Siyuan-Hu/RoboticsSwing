using UnityEngine;
using System.Collections;

public class MoveLeftLap : MonoBehaviour {

	private Rigidbody rb;
	public float force;

	void Start()
	{
		rb = GetComponent<Rigidbody> ();
	}

	void FixedUpdate()
	{
		float moveHorizontal = Input.GetAxis ("Horizontal");
		Vector3 direction = new Vector3 (-moveHorizontal, 0.0f, 0.0f);

		rb.AddForce (direction*force);
	}

}
