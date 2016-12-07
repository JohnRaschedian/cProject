// Author: John Raschedian - http://raschedian.com
// Date: 12/07/2016
// Program filename: ch1prg15c.c
// Program Description: This program shows how scanf() function can read inputs
// from the console - entered by the user -  and assign them to variables.


#include <stdio.h>
#include <math.h>
int main() {
    float number, result;
    printf("\n\nPlease Enter the number you'd like to be squared.\nNumber?");
    scanf("%f", &number);
    result = pow(number, 2);
    printf("\n\n%f raised to power 2 is %f.", number, result);
    return 0;
}
