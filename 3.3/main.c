/*
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 6:38 PM
 */

#include <stdio.h>
int main(void)

{
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
    return 0;
}
