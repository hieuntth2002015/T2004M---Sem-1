#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(int argc, char *argv[]) {
	char a, str[81], *ptr;
	printf("\nNhap mot cau");//sentnce: cau//
	gets(str);
	printf("\nNhap ky tu de ti kiem: ");
	a = getchar();
	ptr = strchr(str,a);
	printf("\n Chuoi bat dau tai dia chi: %u", str);//String starts at address//
	printf("\n Ky tu dau tien xuan hien tai dia chi: %u", ptr);//First occurrence of the character is at address
	printf("\n Vi tri xuat hien dau tien (bat dau tu 0) la: %d", ptr-str);
}
