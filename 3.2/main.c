/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 6:31 PM
 */

#include <stdio.h>

int main(void)
{
    int ten, two;
    
    ten = 10;
    two = 2;
    
    printf("doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("doing it wrong");
    printf("%d minus %d is %d\n", ten); /*forgot 2 args*/
    
    return 0;
}

