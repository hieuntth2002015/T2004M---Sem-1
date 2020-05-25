#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	float  a,b,c;
	a = b =c =0;
	printf(" Nhap gia tri a: ");
	scanf("%f", &a);
	printf(" Nhap gia tri b: ");
	scanf("%f", &b);
    c = adder(a,b );
	
}
float adder(float a, float b);
main()
{
	float  c; 
	c = a+b;
	printf("\n Gia tri cua a & b trong ham la : %f, %f ", a, b);
	printf("\n Gia tri cua tong C la : %f", c);
	return c;
}
