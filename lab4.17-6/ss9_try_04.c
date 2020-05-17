#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, N;
	printf(" Nhap so N: ");
	scanf("%d", &N);
	
	for(i=1; i<N; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
	    printf("\n ");
	}
	return 0;
}
