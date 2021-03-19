using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;


// If enemy is following player to the left, make enemy model face left. 
// If enemy is following the player to the right, make the enemy model face right
public class FlipEnemyModel : MonoBehaviour
{
    public AIPath aiPath;

    // Update is called once per frame
    void Update()
    {
        if (aiPath.desiredVelocity.x >= 0.01f)
        {
            // Flip model to right
            transform.localScale = new Vector3(-1f, 1f, 1f);
        }
        else if (aiPath.desiredVelocity.x <= -0.01f)
        {
            // Flip model to left
            transform.localScale = new Vector3(1f, 1f, 1f);
        }
    }
}
