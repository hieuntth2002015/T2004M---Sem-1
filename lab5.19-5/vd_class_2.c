#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int num,i,j;
	
	printf(" Nhap so num : ");
	scanf("%d", &num);
	
	for(i=1; i<num; i++)
	{		
	    for(j=1; j<=i; j++)
		{
		printf("%d", j);
	    }
	printf("\n");
    }

}
