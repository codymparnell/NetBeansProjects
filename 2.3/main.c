/* two_func.c -- a program using 2 functions in one file
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 5:01 PM
 */

#include <stdio.h>
void butler(void);
int main(void)

{
    printf("I will summon the butler. \n");
    butler();
    printf("Yes. Bring me some tea and writeable cd-roms.\n");
    
    return 0;
}

void butler(void)    /* start of function definition */

{
    printf("you rang, sir.\n");
}
