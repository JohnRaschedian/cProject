// Author: John Raschedian - http://raschedian.com
// Date: 12/01/2016
// Program filename: ch1prg7c.c
// Program Description: This program shows the behavior of
//                      the escape sequence \b.


#include <stdio.h>
int main() {
    printf("123456\b7890");
    return 0;
}

//  Output: 
//  123457890
//  Note: The number "6" is present in the program but it doesn't appear in the output. 
