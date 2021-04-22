using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{

    public float speed;
    public float distance;
    public int damage;
    public float lifeTime;
    public LayerMask whatIsSolid;

    public GameObject destroyEffect;

    private void Start()
    {
        Invoke("DestroyProjectile", lifeTime);
    }

    private void Update()
    {
        RaycastHit2D hitInfo = Physics2D.Raycast(transform.position, transform.up, distance, whatIsSolid);
        {
            // If raycasts collides with anything
            if (hitInfo.collider != null)
            {
                if (hitInfo.collider.CompareTag("Enemy"))
                {
                    // Applies Damage to Overworld Enemies
                    hitInfo.collider.GetComponent<EnemyHealth>().TakeDamage(damage);
                }
                else if (hitInfo.collider.CompareTag("ReaperBoss"))
                {
                    // Applies Damage to Reaper Boss
                    hitInfo.collider.GetComponent<ReaperHealth>().TakeDamage(damage);
                    Debug.Log("Reaper boss was hit");
                }
                else if (hitInfo.collider.CompareTag("EvilWizardBoss"))
                {
                    // Applies Damage to Reaper Boss
                    hitInfo.collider.GetComponent<EvilWizardHealth>().TakeDamage(damage);
                }
                else if (hitInfo.collider.CompareTag("RougeKnight"))
                {
                    // Applies Damage to Reaper Boss
                    hitInfo.collider.GetComponent<RougeKnightHealth>().TakeDamage(damage);
                }
                else if (hitInfo.collider.CompareTag("Vase"))
                {
                    // Applies Damage to Reaper Boss
                    hitInfo.collider.GetComponent<VaseBreak>().TakeDamage(damage);
                }
                DestroyProjectile();
            }
        }
        transform.Translate(Vector2.up * Time.deltaTime * speed);
    }

    void DestroyProjectile()
    {
        Instantiate(destroyEffect, transform.position, Quaternion.identity);
        Destroy(gameObject);
        
    }


}
