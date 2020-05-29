#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char s[1000];
    char t;
    printf(" Nhap ky tu muon lap lai : ");
    gets(s);
    puts(s);
    printf(" Nhap ky tu muon lap : ");
    scanf("%c", &t);
    printf(" %c", t);
    int dem=0;
    int i;
    for( i=0;i<=strlen(s); i++)
    {
    	if(s[i]==t) dem= dem+1;
	}
	printf(" So lan xuat hien ky tu %c la : %d", t, dem);
	return 0;
	}
