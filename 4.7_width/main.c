/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 27, 2013, 11:58 AM
 * 
 * example of field widths
 */

#include <stdio.h>
#define PAGES 931
int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-20d*\n", PAGES);
    
    return 0;
}

