#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c=0, dem=0;
	char s[1000];
	
	printf(" Nhap day chu \n");
	gets(s);
	
	while(s[c] != '\0')
	{
		if(s[c] == 'a' || s[c]=='e' || s[c] == 'i' || s[c] == 'o' || s[c] == 'u')
		dem++;
		c++;
	}
	printf(" so nguyen trong day so le la : %d", dem);

}
