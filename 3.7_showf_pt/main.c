/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 10:38 PM
 * 
 * showf_pt.c --displays floar value in two ways
 */

#include <stdio.h>
int main(void)

{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    
    printf("%f can be written %e\n", aboat, aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%f can be wrtten %e\n", dip, dip);
    
    return 0;
    
}


