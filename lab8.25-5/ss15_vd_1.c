#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for( i= 1; i<=10;i++)
	printf("\n Square � %d", i, squarer(i));
	
}
squarer(int x)
{
	int j;
	j= x*x;
	return;
}
