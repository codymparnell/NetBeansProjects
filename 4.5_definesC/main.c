/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 26, 2013, 5:30 PM
 * 
 * defines.c -- uses defined constants from limit.h and float
 * 
 */

#include <stdio.h>
#include <limits.h>     // int limits
#include <float.h>      // floating-point limits
int main(void)

{
    printf("Some number limits for this system.\n");
    printf("Biggest int: %lld\n", INT_MAX);
    printf("Smallest long long: %d\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest Double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    
    return 0;
    
}


