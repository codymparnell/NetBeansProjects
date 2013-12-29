/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 26, 2013, 1:12 PM
 */

#include <stdio.h>
#include <string.h>
#define PRAISE "what a great name"

int main(void)

{
    char name [40];
    
    printf("Whats your name?\n");
    scanf("%s", name);
    printf("your name of %d letters occupies %d memory cells\n", strlen(name), sizeof name);
    printf("the phrase of praise has %d letters ", strlen (PRAISE));
    printf("and occupies %d memory cells. \n", sizeof PRAISE);
    
    return 0;
}
