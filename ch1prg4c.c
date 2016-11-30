// Author: John Raschedian - http://raschedian.com
// Date: 11/30/2016
// Program filename: ch1prg4c.c
// Program Description: This program demonstrates how the escape
//                      sequence \t creates a horizontal tab in
//                      your output.

#include <stdio.h>
int main() {
    printf("12345678123456781234567812345678\n");
    printf("A\tB\tC\tD\tE\n");
}

// This program creates the following output: 
//  12345678123456781234567812345678
//  A       B       C       D       E
