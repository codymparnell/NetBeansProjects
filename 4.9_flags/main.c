/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 27, 2013, 12:36 PM
 */

#include <stdio.h>

int main(void)

{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**\n", 42, 42, 42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
    
    return 0;
}

