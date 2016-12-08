// Author: John Raschedian - http://raschedian.com
// Date: 12/07/2016
// Program filename: ch1prg16c.c
// Program Description: This program shows how scanf() function can read inputs
// from the console - entered by the user -  and assign them to variables.


#include <stdio.h>
int main() {
    int a, b, c;
    a = 15;
    printf("The values for a, b and c are, \na = %d\nb = %d\nc = %d", a, b, c);
    printf("\nPlease enter the values for a, b and c.\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("The values for a, b and c are,\na = %d\nb = %d\nc = %d", a, b, c);
    return 0;
}
