#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ary[5];
	int i, total, high, nho, sum;
	for (i=0; i<5; i++)
	{
		printf("\n Nhap gia tri %d :", i+1);
		scanf("%c", &ary[i]);
	high = ary[0];
	  
	if(ary[i] >high)
	high = ary[i];
	
	nho =ary[0];
	
	if(ary[i]< nho)
	nho = ary[i];
    sum= sum+ ary[i]; 
    }  
	printf("\n Gia tri lon nhat %d", high);
	printf("\n Gia tri nho nhat %d", nho);
	for (i=0, total = 0; i<5; i++)
	total = total + ary[i];
	printf("\n Gia tri trung binh cua ary is %d ", total/i);
	
	printf("\n Tong cua cac gia  tri %d", sum);
	return 0;
}
