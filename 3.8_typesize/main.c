/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 10:54 PM
 * 
 * prints out type sizes
 * 
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <complex.h>
int main(void)

{
    /* c99 provides a %zd specifier for sizes */
    
    printf("type int has a size of %u bytes.\n", sizeof(int));
    printf("type char has a size of %u bytes.\n", sizeof(char));
    printf("type short has a size of %u bytes.\n", sizeof(short));
    printf("type float has a size of %u bytes.\n", sizeof(float));
    printf("type float _Complex has a size of %u bytes.\n", sizeof(float _Complex));
    //printf("type float _Imaginary has a size of %u bytes.\n", sizeof(float _Imaginary));
    printf("type long has a size of %u bytes.\n", sizeof(long));
    printf("type long long has a size of %u bytes.\n", sizeof(long long));
    printf("type long double has a size of %u bytes.\n", sizeof(long double));
    printf("type long double _Complex has a size of %u bytes.\n", sizeof(long double _Complex));
    printf("type double has the size of %u bytes.\n", sizeof(double));
   // printf("type double _Imaginary has the size of %u bytes.\n", sizeof(double _Imaginary));
    printf("type double _Complex has the size of %u bytes.\n", sizeof(double _Complex));
    
    return 0;
}

