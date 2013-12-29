/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 29, 2013, 5:06 PM
 * 
 * skip2.c -- skips over the first two integers of input
 * 
 */

#include <stdio.h>
int main(void)

{
    int n;
    
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("the last integer was %d\n", n);
    
    return 0;
}