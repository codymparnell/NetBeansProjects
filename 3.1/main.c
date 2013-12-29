/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 6:14 PM
 */

#include <stdio.h>
int main(void)

{
    float weight; /*user weight */
    float value; /*rhodium equivalent */
    
    printf("are you worth your weight in rhodium? \n");
    printf("Lets check it out\n");
    printf("Please enter your weight in pounds: ");
    
    /* get input from user*/
    scanf("%f", &weight);
    
    /*assume rhodium is 770 per ounce*/
    
    /*14.5833 converts pounds avd. to ounces troy*/
    
    value = 770.0 * weight * 14.5833;
    printf("your weight in rhodium is worth $%.2f. \n", value);
    printf("you are worth that if rhodium prices drop,\n");
    printf("eat more to maintain your value");
    
    return 0;
}

