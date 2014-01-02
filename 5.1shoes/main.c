/* 
 * File:   main.c
 * Author: cody
 *
 * Created on January 1, 2014, 4:30 PM
 * 
 * converts a shoe size to inches
 * 
 */

#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
    double shoe, foot;
    
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)   foot length");
    printf("%10.1f %15.2f inches\n, shoe, foot");
    return 0;
}

