/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 29, 2013, 4:58 PM
 * 
 * uses variable width output field
 * 
 */

#include <stdio.h>
int main(void)

{
    unsigned width, precision;
    int number = 256;
    double weight = 245.5;
    
    printf("what field width?\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);
    printf("now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done\n");
    
    return 0;
}