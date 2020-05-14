#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf(" Nhap mot chu cai bat ki trong bang chu cai(a-z) : ");
	scanf("%c", &c);
	if( c< 'a' || c >'z')
	   printf("\nKy tu do khong thuoc bang chu cai");
	else 
	   switch(c)
	   {
	   	case 'a' :
	   	case 'i' :
	   	case 'e' :
	   	case 'u' :
	   	case 'o' : 
	   	printf("\n Day la mot nguyen am ");//vowel: Nguyen am//
	   	break;
	   	case 'z' :
	   	printf("\n Nhap chu cai cuoi cung(z): ");
	   	break;
	   	default :
	   		printf(" day la mot phu am");//consonant: phu am//
	   }
	return 0;
}
