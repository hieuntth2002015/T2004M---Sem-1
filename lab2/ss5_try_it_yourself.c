#include<stdio.h>
int main() {
	float cm, inches, foot;
	printf(" Vui long nhap vao gia tri so thuc: ");
	scanf("%f", &cm);
	inches= cm/2.54;
	foot= cm/12;
	printf(" Gia tri inches tuong ung la=%.2f \n", inches);
	printf(" gia tri foot tuong ung la =%.2f \n", foot);
	return 0;
}

