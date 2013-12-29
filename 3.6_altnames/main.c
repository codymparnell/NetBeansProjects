/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 10:21 PM
 * 
 * portable names for int types
 * 
 */

#include <stdio.h>
#include <inttypes.h>   //  supports portable types
int main(void)

{
    int16_t me16;       //  me16 a 16-bit signed variable
    
    me16 = 4593;
    printf("First, assume int16_t is short: ");
    printf("me16 = %hd\n", me16);
    printf("Next, lets not make any assumptions.\n");
    printf("Instead, use a \*macro\* from inttypes.h: ");
    printf("me16 =%" PRId16 "\n", me16);
    
    return 0;
}

