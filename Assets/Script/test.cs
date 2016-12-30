using UnityEngine;
using System.Collections;

public class test : MonoBehaviour {

	public GameObject attach;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.position = attach.transform.position + new Vector3 (0, 0, 0.6f);
	}
}
