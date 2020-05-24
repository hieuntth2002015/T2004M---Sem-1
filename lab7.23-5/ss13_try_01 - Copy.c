#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char*ptr;
	ptr=(char*)malloc(100*sizeof(char));
	int i,j,n,k=0;
	printf("\nNhap Chuoi ");
	scanf("%s", ptr);
	n=strlen(ptr);
	for(i=0 , j=(n-1); i<(n/2); i++,j--)
	{
		if(*(ptr+i) == *(ptr+j))
		{k++;
	    }
	}
	if(k == (n/2))
	printf(" Chuoi nay la chuoi doc nguoc xuoi deu giong nhau\n");
	
	else {
		printf("\Chuoi nay la chuoi binh thuong\n");
	}
	getch();
	return 0;
}
