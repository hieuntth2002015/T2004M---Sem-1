#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int i,n;
	printf(" gia tri cua n la: ");
	scanf("%d", &n);
	for(i=1; i<=n ;i++)
	printf("\n squarer of %d is %d ", i, squarer(i));
	
}
squarer (int k)
{
	int h;
	h = k + 5;
	return h;
	
}
