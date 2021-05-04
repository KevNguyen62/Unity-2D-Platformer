using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvilWizardHealth : MonoBehaviour
{
    public int health = 500;

    public GameObject deathEffect;
    public GameObject portal;

    public bool isInvulnerable = false;

    public void TakeDamage(int damage)
    {
        if (isInvulnerable)
            return;

        health -= damage;

        if (health <= 40)
        {
            GetComponent<Animator>().SetBool("isEnraged", true);
        }

        if (health <= 0)
        {
            Die();
            SpawnPortal();
        }
    }

    void Die()
    {
        GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
        Destroy(gameObject);
        // Destroys deathEffect gameobject after X seconds
        Destroy(death, 3f);
    }

    void SpawnPortal()
    {
        Instantiate(portal, transform.position, Quaternion.identity);
    }
}
