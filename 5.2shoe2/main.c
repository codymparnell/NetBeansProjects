/* 
 * File:   main.c
 * Author: cody
 *
 * Created on January 1, 2014, 4:36 PM
 * 
 * calculates foot lengths for several sizes
 * 
 */

#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
    double shoe, foot;
    
    printf("Show size (mens)    foot length\n");
    shoe = 3.0;
    while(shoe < 18.5) /*starting while loop */
    {                   /* start of block */
        foot = SCALE*shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }                   /* end of block */
    printf("if the shoe fits wear it.\n");
}



