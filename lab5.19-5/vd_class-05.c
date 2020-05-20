#include<stdio.h>
int main()
{
	char use[]  = "hieuntth2002015";
	char pass[] = "tbl";
	char use[50], pass[50];
	printf(" Nhap tai khoan: ");
	gets(use);
	printf(" Nhap mat khau: "); 
	gets(pass);
	while(strcmp(use) != 0 || strcmp(pass) !=0)
	{
		printf("\n dang nhap tk va mk\n");
		printf("\n nhap tk: ");
		scanf("%c", &use);
		printf("\n nhap mk ");
		scanf("%c", &pass);
	}
	printf(" dang nhap thanh cong !\n");
}
