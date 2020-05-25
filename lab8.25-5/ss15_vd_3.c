#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	incre();
	incre();
	incre();

}
incre()
{
	static char var = 65; 
	printf("\n so  ky tu dc in ra tu var is %c", var++);
}
