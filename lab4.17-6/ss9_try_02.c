#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,num1, num2, sum=0;
	printf(" Nhap so num1 : \n");
	scanf("%d", &num1);
	printf(" Nhap so num2 : \n");
	scanf("%d", &num2);
	if (num1 % 2 == 0)
	{
		num1++;
	}
	for(i= num1; i<=num2; i+=2)
	{
		sum+=i;
	}
	printf(" TOng cua 2 so le giau %d & %d = %d", num1, num2, sum);
	return 0;
}
