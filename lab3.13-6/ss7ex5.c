#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	x = 0;
	
	printf(" Enter choise(1-3) :");
	scanf("%d", &x);
	if (x == 1)
	   printf("\nChoise is 1");
	else if (x ==2)
	   printf("\nChoise is 2");
	else if (x ==3)
	   printf("\nChoise is 3");
	else 
	   printf("\n Invalid choise");//lua chon k hop le//
	return 0;
}
