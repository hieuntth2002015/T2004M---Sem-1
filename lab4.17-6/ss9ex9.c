#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	num2=0;
	do{
		printf("\n Enter a number : ");
		scanf("%d", &num1);
		printf(" No. is %d", num1);
		num2++;
	}while(num1 !=0);
	printf("\n The total numbers entered were %d", --num2);//total tong//
	return 0;//num2  se bi giam truoc khi in ra va khong tinh sp cupi cung//
}
