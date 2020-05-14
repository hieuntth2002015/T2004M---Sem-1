#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf(" please enter the number a: ");
	scanf("%d", &a);
	printf(" Please enter the number b: ");
	scanf("%d", &b);
	if(a*b >= 1000)
	 printf(" Tich cua 2 so lon hon hoac bang 1000 ");
	else
	 printf(" Tich cua 2 so be hon 1000");
	return 0;
}
