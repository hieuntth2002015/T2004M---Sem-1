#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char name[20];
	puts(" Nhap ten cua ban: ");
	gets(name);
	
	puts(" Hi there: ");
	puts(name);
	
	getch();
}
