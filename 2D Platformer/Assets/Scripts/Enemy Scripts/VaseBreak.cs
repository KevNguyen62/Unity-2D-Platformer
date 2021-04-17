using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VaseBreak : MonoBehaviour
{
    public int health;

    public GameObject deathEffect;
    public GameObject dropHeart;

    public AudioSource vaseBreakSound;

    public void TakeDamage(int damage)
    {
        health -= damage;
    }

    public void Update()
    {
        if (health <= 0)
        {
            vaseBreakSound.Play();
            Die();
        }
    }
    void Die()
    {
        GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
        GameObject heart = Instantiate(dropHeart, transform.position, Quaternion.identity);
        Destroy(gameObject);
        // Destroys deathEffect gameobject after X seconds
        Destroy(death, 0.4f);
    }
}
