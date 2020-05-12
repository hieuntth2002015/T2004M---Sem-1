#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float doC,doF;
	printf(" ============Baitap_04===========\n");
	printf(" Nhap vao gia tri do C :");
	scanf("%f", &doC);
	
	doF= 9*doC/5+32;
	printf(" Do F tuong ung = %.2f", doF);
	return 0;
}
