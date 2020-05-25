#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int x, y, *px, *py;
	// dia chi cua x trong px//
	px = &x;
	//dia chi cua y trong py//
	py=&y;
	x =15;y=20;
	printf(" x = %d, y = %d \n", x, y);
	swap(px,py);
	printf("\n Sau khi hoan doi x = %d , y =%d\n", x, y);//interchang: trao doi//
}

swap(int u, int v)

//accept : chap nhan ..gia tri cua px va py den u va v//
{
	int temp;
	temp = u;
	u=v;
	v= temp;
	return;
}
