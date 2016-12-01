// Author: John Raschedian - http://raschedian.com
// Date: 12/01/2016
// Program filename: ch1prg9c.c
// Program Description: Use printf to retrieve a value stored
//                      in a variable and print it.


#include <stdio.h>
int main() {
    int length = 5;
    float width = 2.5;
    printf("The length of the rectangle is ");
    printf("%d\n", length);
    printf("The length of the rectangle is ");
    printf("%f", width);
    return 0;
}


//  Output: 
//  The length of the rectangle is 5
//  The width of the rectangle is 2.500000
