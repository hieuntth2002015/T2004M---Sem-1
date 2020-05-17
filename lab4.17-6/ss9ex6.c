#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int count =0;//count: dem//
	while(count<100)
	{
		printf(" This goes on forever, Help!!!\n");//dieu nay dien ra mai mai//
		count+=10;
		printf("\t%d", count);
		count-=10;
		printf("\t%d", count);
		printf("\nCtrl-C will help");
	}

}
