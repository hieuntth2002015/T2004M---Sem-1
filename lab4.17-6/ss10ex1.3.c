#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,n, num =1;
	printf(" Nhap so de tinh giai thua\n");
	scanf("%d", &n);
	for(a=1; a<=n; a++)
	num= num*a;
	printf(" Gia thua cua %d = %d\n", n, num);
	return 0;
	}

