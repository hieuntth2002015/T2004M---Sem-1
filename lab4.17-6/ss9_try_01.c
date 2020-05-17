#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int num;
	num=100;
	printf("In ra man hinh so tu 100 to 5 : \n\n");
    while (num >=0)
    {
	printf("%d\n", num);
	num-=5;
    }
	return 0;
}
