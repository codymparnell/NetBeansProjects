/* 
 * File:   main.c
 * Author: cody
 *
 * Created on January 1, 2014, 5:06 PM
 * 
 * produces a table of the first 20 squares
 * 
 */

#include <stdio.h>
int main(void)
{
    int num = 1;
    
    while (num < 21)
    {
        printf("%4d %6d\n", num, num);
        num = num + 1;
    }
    return 0;
}

