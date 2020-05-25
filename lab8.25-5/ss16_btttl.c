#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int a){
	printf(" Nhap vao mot so: ");
	scanf("%d",&a);
	adder(a, a);
}
adder (int a)
{
	int bt;
	bt = a*a;
	printf("\n\n Binh phuong cua so %d la %d ", a, bt);
	return(bt);
}
