#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(int argc, char *argv[]) {
	int i, n= 0;
	int item;
	char x[10][12];
	char temp[12];
	
	printf(" Nhap chuoi tren tung dong rieng biet \n\n");// string: chuoi, separete rieng biet line dong//
	printf(" Kieu 'END' sau khi ket thuc \n\n");// type: kieu, over ket thuc//
	do{
		printf(" Chuoi %d:", n + 1);
		scanf("%s", x[n]);
		
	}while(strcmp(x[n++], "END"));
	
	n = n - 1 ;
	for(item = 0; item < n-1; ++item)
	{
		for(i = item + 1; i < n; ++i)
		{
			if(strcmp (x[item], x[i]) > 0)
			{
				strcpy(temp, x[item]);
				strcpy(x[item], x[i]);
				strcpy(x[i], temp);
			}
		}
	}
	
	printf(" Ghi lai day sach cua chuoi: \n");//record: ghi lai //

	for(i = 0; i < n; ++i)
	{
		printf("\nChuoi %d la %s", i + 1, x[i]);
	}
	
}
