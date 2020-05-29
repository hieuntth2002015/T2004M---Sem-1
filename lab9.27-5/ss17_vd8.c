#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(int argc, char *argv[]) {
	int num[5], ctr, sum=0;
	int sum_arr(int num_arr[]);
	
	for(ctr=0; ctr<5;ctr++)
	{
		printf("\n Nhap so %d: ", ctr+1);
		scanf(" %d", &num[ctr]);
	}
	sum = sum_arr(num);
	printf("\n Tong cua cac mang la %d", sum);//array : mang//
	getch();
}
int sum_arr(int num_arr[])
{
	int i,total;
	
	for(i=0, total =0; i<5; i++)
	total += num_arr[i];
	
	return total;
}
