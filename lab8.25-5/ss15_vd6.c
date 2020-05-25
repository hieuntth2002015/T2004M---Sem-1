#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int x, y;
	x =15; y=20;
	printf(" x =%d, y = %d\n", x, y);
	swap(x, y);
	printf("\n after interchanging x = %d, y = %d", x, y);
}
swap(int u, int v)
{
	int temp;
	temp = u;
	u =  v;
	v = temp;
	return 0;
}
