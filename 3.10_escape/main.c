/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 11:15 PM
 * 
 * uses escape characters
 */

#include <stdio.h>
int main(void)

{
    float salary;
    printf("\aEnter your desired salary:");/* 1 */
    printf(" $ _______________ \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); /* 2 */
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year." , salary, salary * 12.0); /* 3 */
    printf("\rGee!\n"); /* 4 */
    
    return 0;
}


