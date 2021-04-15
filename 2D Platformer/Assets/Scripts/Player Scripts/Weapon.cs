﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{

    

    //adjusts the angle of the weapon manually to the cursor. 
    public float offset = -180f;
    public Transform shotPoint;
    public GameObject projectile;

    private float timeBtwShots;
    public float startTimeBtwShots;

    // Update is called once per frame
    void Update()
    {
        //calculat the angle of the weapon to the mouse

        //calculate the direction of the mouse cursor to the weapon
        Vector2 difference = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;

        //calculate the degrees of the weapon to face the mouse
        float rotZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;

        //set weapon rotation 
        transform.rotation = Quaternion.Euler(0f, 0f, rotZ + offset);

        if (timeBtwShots <= 0)
        {
            //firing projectile
            if (Input.GetMouseButtonDown(0))
            {
                Instantiate(projectile, shotPoint.position, Quaternion.Euler(0f, 0f, rotZ + -90));
                timeBtwShots = startTimeBtwShots;
            }
        }
        else
        {
            timeBtwShots -= Time.deltaTime;
        }
        

      
    }
}