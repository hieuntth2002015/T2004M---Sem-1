#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf(" the numbers from 1 to 255 are: \n\n");
	for(num = 0; num != 255;) 
	printf("%d\n", num);
	{    
	printf("Enter no. ");    
	scanf("%d", &num); 
	}
	return 0;
}
