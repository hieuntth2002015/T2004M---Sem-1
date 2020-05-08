#include<stdio.h>
int main() {
	char c;
	float f;
	double lf;// long double %lf  long int %ld//
	long ld;
	short hd; // short la %hd//
	printf(" Nhap gia tri c : "); 
	scanf("%c", &c);
	printf(" Nhap gia tri f : ");
	scanf("%f", &f);
	printf(" Nhap gia tri lf : ");
	scanf("%lf", &lf);
	printf(" Nhap gia tri ld : ");
	scanf("%ld", &ld);
	printf(" Nhap gia tri sd : ");
	scanf("%hd", &hd);
	
	printf(" Nhap vao gt c 8bits tu (-128 - 128) : %c\n", c);// gom ca chu//
	printf(" Nhap vao gt f 32 bits gioi han 6 chu so thap phan: %f\n", f);
	printf(" Nhap vao gt lf 64 bits gh 10 so thap phan : %lf\n", lf);
	printf(" Nhap vao gt ld 32-128 bits 10 stp: %ld\n", ld);
	printf("Nhap vao gt d 2 byte 16 bits -32,768- 32,767 : %hd", hd);
 return 0;
	 }
