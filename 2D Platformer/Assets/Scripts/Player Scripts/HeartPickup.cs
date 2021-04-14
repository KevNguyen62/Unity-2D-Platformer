using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeartPickup : MonoBehaviour
{
    PlayerHealth playerHealth;
    public HealthBar healthBar;
    public int healthAddAmount = 20;

    private void Awake()
    {
        playerHealth = FindObjectOfType<PlayerHealth>();
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        if (playerHealth.currentHealth < 100)
        {
            Destroy(gameObject);
            healthBar.SetHealth(playerHealth.currentHealth += healthAddAmount);
        }
    }
}
