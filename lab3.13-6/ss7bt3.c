#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf(" Please enter the number a : ");
	scanf ("%d", &a);
	printf(" Please enter the number b : ");
	scanf ("%d", &b);
	if((a-b)  == b|| (b-a) ==a)
	 printf(" Hieu bang gia tri =<gia tri cua so da nhap vao> ");
	else 
	printf(" Hieu khong bang bat ky gia tri nao da nhap vao ");
	return 0;
}

