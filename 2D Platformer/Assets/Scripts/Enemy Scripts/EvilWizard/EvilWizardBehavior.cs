using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvilWizardBehavior : StateMachineBehaviour
{
    public float speed;
    public float attackRange;
    public float enemyDetectionRange;
    public float playerDistance;

    Transform player;
    Rigidbody2D rb;
    FlipSprite flipSprite;

    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        rb = animator.GetComponent<Rigidbody2D>();
        flipSprite = animator.GetComponent<FlipSprite>();
    }

    //  OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        flipSprite.LookAtPlayer();

        playerDistance = Vector3.Distance(animator.transform.position, player.position);
        if (playerDistance < enemyDetectionRange)
        {
            animator.transform.position = Vector2.MoveTowards(animator.transform.position, player.position, speed * Time.deltaTime);
        }

        if (Vector2.Distance(player.position, rb.position) <= attackRange)
        {
            animator.SetTrigger("evilWizardAttack1");
        }
    }

    // OnStateExit is called when a transition ends and the state machine finishes evaluating this state
    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        animator.ResetTrigger("evilWizardAttack1");
    }
}
