#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int *a, i, n, sum = 0;
	printf("\n%s%s", " Mot mang se duoc dao ra.\n\n",
	" In ra kich thuoc mang n theo sau la so nguyen : ");
	scanf("%d", &n);//lay so phan tu//
	a= (int *) calloc (n, sizeof(int)); // allocate space : phan bo khong gian//
	//lay mot gia tri cho moi phan tu//
	for(i=0; i<n; i++)
	{
		printf(" Nhap %d gia tri: ", n);
		scanf("%d", a+i);
	}
	//tong cac gia tri//
	for(i=0; i<n; i++)
	sum += a[i];
	free(a); // giai phong khong gian//
	printf("\n%s%7d\n%s%7d\n\n", " So luong cac phan tu: ", n, 
	"Tong cua cac phan tu: ", sum);	
}
	

