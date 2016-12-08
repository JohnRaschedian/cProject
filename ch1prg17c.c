// Author: John Raschedian - http://raschedian.com
// Date: 12/07/2016
// Program filename: ch1prg17c.c
// Program Description: In this program, you're going to learn
// how to create a simple cash receipt using the input values
// from the keyboard by the user.



#include <stdio.h>
int main() {
    char item;
    int quantity;
    float rate, amount;
    printf("Please enter the values for item, quantity and rate\nitem?");
    scanf("%c", &item);
    printf("Quantity?");
    scanf("%d", &quantity);
    printf("Rate?");
    scanf("%f", &rate);
    amount = quantity * rate;
    printf("\t\t\tCash Receit\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Item\tQuantity\tRate\t\tAmount\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("%c\t%d\t\t%f\t%f\n", item, quantity, rate, amount);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    return 0;
}
