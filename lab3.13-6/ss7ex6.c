#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	x= y =0;
	
	printf(" Enter choise (1-3) :");//Nhap lua chon//
	scanf("%d", &x);
	if (x==1)
	{
		printf("\nNEter value for y (1-5): ");//value : gia tri//
		scanf("%d", &y);
		if(y <=5)
		    printf("\n The value for y is : %d ", y);
		else 
		    printf("\n The value of y exceeds 5");//exceed: quá, thua`//
	}else
	    printf("\nChoise entered was not 1");
 	return 0;
}
