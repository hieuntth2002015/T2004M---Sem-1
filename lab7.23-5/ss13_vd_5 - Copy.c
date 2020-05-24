#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int *ptr;
	int i;
	printf("Ban muon luu tru bao nhieu ints? ");//How many ints would you like store?//
	scanf("%d", &number);
	ptr= (int *) malloc (number*sizeof(int));// allocate: phan bo, allocate memory: phan bo bo nho//
	if(ptr!=NULL)
	{
		for(i=0; i<number; i++)
		{
			*(ptr+i)=i;
		}
		for(i=number; i>0;i--)
		{
			printf("%d\n", *(ptr+(i-1)));//in ra trat tu dao nguoc, reverse: dao nguoc, orde: thu tu, trat tu//
			
		}
		free(ptr);//mien phan bo bo nho//
		return 0;
	}
	else
	{
		printf("\nBo nho phan bo loi- khong du bo nho.\n");// not enough: khong du//
        return 1;		
	}
}
