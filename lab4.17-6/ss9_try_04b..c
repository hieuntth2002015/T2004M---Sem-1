#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,n;
	printf("Nhap N: ");
	scanf("%d", &n);
	
	for(a=n-1; a>=1; a--)
	{
		for(b=1; b<=a; b++)
		{
		    printf("%d", b);
		}
		printf("\n");
	}
	return 0;
}
