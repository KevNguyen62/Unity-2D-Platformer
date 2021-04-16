using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyHealth : MonoBehaviour
{
    public int health;

    public GameObject deathEffect;

    public void TakeDamage(int damage)
    {
        health -= damage;
    }

    public void Update()
    {
        if (health <= 0)
        {
            Die();
        }
    }
    void Die()
    {
        GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
        Destroy(gameObject);
        // Destroys deathEffect gameobject after X seconds
        Destroy(death, 0.5f);
    }
}
