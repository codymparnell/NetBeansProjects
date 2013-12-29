/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 26, 2013, 1:04 PM
 * 
 * uses an assortment of strings
 * 
 */

#include <stdio.h>
#define PRAISE "whats a super marvelous name!"
int main(void)

{
    char name [40];
    
    printf("Whats your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    
    return 0;
}

