#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned age;
	unsigned long int  salary;
	 printf(" Nhap so tuoi : ");
	 scanf("%u", &age);
	 printf(" Nhap muc luong :");
	 scanf("%lu", &salary);
	 
	printf(" \nSo tuoi la : %u\n", age);
	printf(" Muc luong la : %lu", salary);
	return 0;
}
