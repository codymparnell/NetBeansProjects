/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 5:59 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int d, t, a, y;
    
    d = 365;
    a = 32;
    t = a * d;
    y = t / d;
    printf("I am %d days old\n and %d years old", t, y);
    return 0;
}

