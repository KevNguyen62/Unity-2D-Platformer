using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OverworldEnemyHealth : MonoBehaviour
{
    public int health;

    public void TakeDamage(int damage)
    {
        health -= damage;
    }

    public void Update()
    {
        if (health <= 0)
        {
            Destroy(gameObject);
        }
    }
}
