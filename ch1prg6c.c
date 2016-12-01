// Author: John Raschedian - http://raschedian.com
// Date: 12/01/2016
// Program filename: ch1prg6c.c
// Program Description: In this program, you learn how to create
//                      the output below using escape sequences like \t.


#include <stdio.h>
int main() {
    printf("\t\t\tMarks Report\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Name1\tName2\tName3\tName4\tName5\tName6\tName7\tName8\n");
    printf("89\t76\t78\t89\t99\t100\t74\t91\n");
    printf("\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    return 0;
}




//  Output: 
/*
                        Marks Report
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Name1   Name2   Name3   Name4   Name5   Name6   Name7   Name8
89      76      78      89      99      100     74      91

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

