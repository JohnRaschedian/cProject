// Author: John Raschedian - http://raschedian.com
// Date: 12/02/2016
// Program filename: ch1prg11c.c
// Program Description: In this program you'll learn the data type 'char'.
// You'll also learn how you can use conversion specifiers like %c or %d in 
// order to call your variables in a printf statement.

#include <stdio.h>
int main() {
    int one, two, three, four, five;
    one = 1;
    two = 2;
    three = 3;
    four = 4;
    five = 5;
    char first, second, third, forth, fifth;
    first = 'A';
    second = 'B';
    third = 'C';
    forth = 'D';
    fifth = 'E';
    printf("This program lists the first five letters of the English language.\n");
    printf("%d\t%c\n%d\t%c\n%d\t%c\n%d\t%c\n%d\t%c\n\n", one, first, two, second, three, third, four, forth, four, fifth);
    return 0;
}








//  Output

/*
1   A
2   B
3   C
4   D
5   E
*/
