/* 
 * File:   main.c
 * Author: cody
 *
 * Created on December 26, 2013, 12:37 PM
 * 
 * nosy, information program
 * 
 */

#include <stdio.h>
#include <string.h> //for strlen prototype
#define  DENSITY 62.4   // human density in lbs per cu ft
int main()
{
    float weight, volume;
    int size, letters;
    char name [40]; //name is an array if 40 chars
    printf("what is your first name?\n");
    scanf("%s", name);
    printf("%s, whats your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it in.\n", size);
    
    return 0;
    
}


