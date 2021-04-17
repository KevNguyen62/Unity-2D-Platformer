using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RougeKnightAttack : MonoBehaviour
{
    public int attackDamage = 20;

    public Vector3 attackOffset;
    public float attackRange = 1f;
    public LayerMask attackMask;

    public AudioSource rougeKnightAttackSound1;
    public AudioSource rougeKnightAttackSound2;
    public AudioSource rougeKnightAttackSound3;
    public void Attack()
    {
        Vector3 pos = transform.position;
        pos += transform.right * attackOffset.x;
        pos += transform.up * attackOffset.y;

        Collider2D colInfo = Physics2D.OverlapCircle(pos, attackRange, attackMask);
        if (colInfo != null)
        {
            colInfo.GetComponent<PlayerHealth>().TakeDamage(attackDamage);
        }
    }

    void OnDrawGizmosSelected()
    {
        Vector3 pos = transform.position;
        pos += transform.right * attackOffset.x;
        pos += transform.up * attackOffset.y;

        Gizmos.DrawWireSphere(pos, attackRange);
    }

    public void rougeKnightAttack1()
    {
        rougeKnightAttackSound1.Play();
    }

    public void rougeKnightAttack2()
    {
        rougeKnightAttackSound2.Play();
    }
    public void rougeKnightAttack3()
    {
        rougeKnightAttackSound3.Play();
    }
}
