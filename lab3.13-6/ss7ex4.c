#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf(" please enter a character : ");
	scanf("%c", &c);
	if (c >='A' && c <= 'Z')
	    printf(" ky tu chu thuong = %c", c + 'a' - 'A');
	else 
	    printf(" ky tu da nhap = %c", c);
	return 0;
}
