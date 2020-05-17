#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int star, a, n;
	printf(" Nhap so cua * trong day : ");
	scanf("%d", &n);
	
	for(star =n-1; star>=1; star--)
	{
		for(a=1; a<=star; a++)
		{
		    printf("*");
		}
		printf("\n");
	}
	return 0;
}
