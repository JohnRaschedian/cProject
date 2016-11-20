/* Demo: Different Output Formats Using \n and \t */
#include <stdio.h>
void main() {
	printf("ABCDE\n");
	printf("A\tB\tC\t\D\tE\n");
	printf("A\t\b--\t65\n");
	printf("B\t\b--\t66\n");
	printf("C\t\b--\t67\n");
	printf("\n");
	printf("A\nAB\n\ABC\nABCD");
}
