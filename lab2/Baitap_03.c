#include <stdio.h>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	printf(" ====== Baitap_03 =======\n");
	printf(" Nhap so nguyen num 1: ");
	scanf("%d", &num1);
	printf(" Nhap so nguyen num 2: ");
	scanf("%d", &num2);
    
	float thuong = (float)num1/(float)num2;
	printf("\n Tong hai so nguyen = %d\n", num1+num2);
	printf(" Hieu hai so nguyen la = %d\n", num1-num2);
	printf(" Tich hai so nguyen la = %d\n", num1*num2);
    printf(" Thuong hai so nguyen la= %0.1f \n", thuong);
	getch();
	return 0;
	}
	

