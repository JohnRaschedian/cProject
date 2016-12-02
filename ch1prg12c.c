// Author: John Raschedian - http://raschedian.com
// Date: 12/02/2016
// Program filename: ch1prg12c.c
// Program Description: In this program, you'll learn how you can
// use your variables and do computations on them.


#include <stdio.h>
int main() {
    char item = 'C';
    int no;
    no = 2;
    float rate = 12.5;
    float amount;
    amount = no * rate;
    printf("\t\tCheque\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Item\tNo.\tRate\tAmount\n");
    printf("%c\t%d\t%f\t%f\n", item, no, rate, amount);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Thank you for your visit! See you next time!\n\n");
    return 0;
}



/*

                    Cheque
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Item    No.     Rate    Amount
C       2       12.50   25.000000
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Thank you for your visit! See you next time!
*/
