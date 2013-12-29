/* a program with errors
 * File:   main.c
 * Author: cody
 *
 * Created on December 25, 2013, 5:10 PM
 */

#include <stdio.h>
int main (void)

{
int n, n2, n3;

/* this program has several errors*/

n = 5;
n2 = n * n;
n3 = n2 *n2;
printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

return 0;
}
