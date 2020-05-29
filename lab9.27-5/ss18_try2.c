#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char names[5][20], pr[5];
	char tmp[32];
	int i;
	printf(" Nhap chuc danh : ");
    scanf("%s", &pr);
    for(i=0;i<=4;i++)
    {
	printf(" Nhap ten: %d\n", i+1);
	scanf("%s", &names[i]);
    }
    
	for(i=0;i<=4;i++)
	{
	    strcpy(tmp, pr);
	    strcat(tmp, names[i]);
	    printf("%s\n", tmp);
	}
}
