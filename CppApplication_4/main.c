/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 27, 2013, 11:45 AM
 * 
 * uses conversion specifiers
 */

#include <stdio.h>
#define PI 3.141593
int main(void)

{
    int number = 5;
    float espresso = 13.5;
    int cost = 3100;
    
    printf("The %d Ceos drank %f cups of expresso.\n", number, espresso);
    printf("the value of pi is %f.\n", PI);
    printf("farewell! thou art too dear for my posessing,\n");
    printf("%c%d\n", '$', 2 * cost);
    
    return 0;
}
