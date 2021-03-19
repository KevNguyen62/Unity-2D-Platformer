using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    private Rigidbody2D rigidBody;

    [SerializeField]
    private float horizontalDirection, movementSpeed, jumpForce;

    private bool isGrounded;
    // Public so the player can set the value in the inspector box
    public Transform feetPosition;
    public float checkRadius;
    public LayerMask whatIsGround;

    //Animator component in player 
    private Animator myAnimator;

    // Start is called before the first frame update
    void Start()
    {
        rigidBody = GetComponent<Rigidbody2D>();
        myAnimator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        horizontalDirection = Input.GetAxisRaw("Horizontal");
        handleRunning(horizontalDirection);
        handleJump();
    }

    private void handleRunning(float horizontalDirection)
    {
        rigidBody.velocity = new Vector2(horizontalDirection * movementSpeed, rigidBody.velocity.y);
        // If = 0, then player is not moving
        if (horizontalDirection != 0 && !myAnimator.GetCurrentAnimatorStateInfo(0).IsName("jump"))
        {
            myAnimator.SetBool("isRunning", true);
            myAnimator.SetBool("jump", false);
        }
        else
        {
            myAnimator.SetBool("isRunning", false);
        }

        // If player is moving left, make player model face left
        if (horizontalDirection < 0)
        {
            transform.eulerAngles = new Vector3(0, 0, 0);
        }

        // If player is moving right, make player model face right
        if (horizontalDirection > 0)
        {
            transform.eulerAngles = new Vector3(0, 180, 0);
        }
    }

    private void handleJump()
    {
        isGrounded = Physics2D.OverlapCircle(feetPosition.position, checkRadius, whatIsGround);
        if (isGrounded == true && Input.GetKeyDown(KeyCode.Space))
        {
            rigidBody.velocity = Vector2.up * jumpForce;
            myAnimator.SetBool("jump", true);
        }
    }

}
