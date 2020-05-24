#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char*ptr;
	char word[10];
	int i, vowcnt=0;
	printf("\nNhap mot van ban: ");
	scanf("%s", word);
	ptr= &word[0];for(i=0;i<strlen(word);i++)
	{
		if(*ptr == 'a' || *ptr == 'e' || *ptr== 'o' || *ptr == 'u'||
		*ptr == 'i')
		vowcnt++;
		ptr++;
	}
	printf("\n van ban la: %s \n So nguyen am torng van ban la : %d", word, vowcnt);
	
	return 0;
}
