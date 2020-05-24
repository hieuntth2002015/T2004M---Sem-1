#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(int argc, char *argv[]) {
	int ary[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12}; 
	int a, b;
	
	for(a = 0; a < 3; a++)
	{
		for(b = 0;b < 4; b++)
		{
			printf("\nEnter a number at [%d][%d]:", a, b);
			scanf("%d", &ary[a][b]);
		}
	}
	for(a=0; a<3; a++)
	{
		for(b=0; b<4; b++)
		{
			printf("\n THe number at [%d][%d] is %d", a, b, ary[a][b]);
		}
	}
	
}
