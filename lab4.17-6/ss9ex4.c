#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int i, j, k;
	i = 0;
	printf(" Nhap no. of rows :");//row: hang, sao(*)//
	scanf("%d", &i);
	printf("\n");
	for(j= 0; j <i; j++)
	{
		printf("\n");
		for ( k = 0; k <= j; k++) /*ben trong cua vong lap */
		   printf("*");
	}
}

