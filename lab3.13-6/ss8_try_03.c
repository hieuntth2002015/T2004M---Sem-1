#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	printf(" Nhap vào gia tri a: ");
	scanf("%f", &a);
	printf(" Nhap vào gia tri b: ");
	scanf("%f", &b);
	printf(" Nhap vào gia tri c: ");
	scanf("%f", &c);
	printf(" =======Highest Value======");
	if (a>b && a>c)
	printf(" \nGia tri lon nhat la a %.2f", a);
	else if(b>a && b>c)
	printf(" \nGia tri lon nhat la b %.2f", b);
	else
	printf(" \nGia tri lon nhat la c %.2f", c);
	
	return 0;
}
