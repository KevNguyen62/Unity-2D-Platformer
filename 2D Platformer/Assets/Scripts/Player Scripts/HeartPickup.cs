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
            // Gets the current health and adds it by the health amount. Then update the health bar
            healthBar.SetHealth(playerHealth.currentHealth += healthAddAmount);
        }
    }
}
