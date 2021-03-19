using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    public Transform player;
    public float cameraDistance;

    private void Awake()
    {
        GetComponent<UnityEngine.Camera>().orthographicSize = ((Screen.height / 2) / cameraDistance);
    }
    private void FixedUpdate()
    {
        transform.position = new Vector3(player.position.x, player.position.y, transform.position.z);
    }
}
