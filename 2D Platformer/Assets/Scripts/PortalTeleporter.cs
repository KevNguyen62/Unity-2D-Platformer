using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalTeleporter : MonoBehaviour
{
    public GameObject PortalDestination;
    public GameObject Player;

    public void OnTriggerEnter2D(Collider2D collision)
    {
        // If player is in the portal
        if (collision.gameObject.tag == "Player")
        {
            StartCoroutine(Teleport());
        }
    }

    IEnumerator Teleport()
    {
        yield return new WaitForSeconds(0.1f);
        Player.transform.position = new Vector2(PortalDestination.transform.position.x, PortalDestination.transform.position.y);
    }
}
