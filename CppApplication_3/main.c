/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 9:37 PM
 */

#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000; /* system w/ 32-bit in */
    short end =200;               /* 16-bit short */
    long big = 65537;
    long long verybig = 12345678908642;
    
    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %1 and not %hd\n", big, big);
    printf("verybig = %lld and not %ln\n", verybig, verybig);
    
    return 0;
}
