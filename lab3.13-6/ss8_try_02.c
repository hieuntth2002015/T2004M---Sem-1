#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf(" Types in a letter of the alphabet : ");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'A':
		case 'a':
			printf(" Ada is language ");
			break;
		case 'B':
		case 'b':
			printf(" Basic is package available ");
			break;
		case 'C':
		case 'c':
			printf(" COBOL is language ");
			break;
		case 'D':
		case 'd':
			printf(" dBASE III is language");
			break;
		case 'F':
		case 'f':
			printf(" Fortran is language ");
			break;
		case 'P':
		case 'p':
			printf(" Pascal is language ");
			break;
		case 'V': 
		case 'v':
			printf(" Visual C++ is package availble ");
			break;
		default : 
		printf (" invalid");
	}
	return 0;
}
