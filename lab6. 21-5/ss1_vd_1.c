#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch[4] = { 'H', 'I', 'E', 'U'};
	int i;
	
	for(i=0; i<4; i++)
	{
		printf("\n Number at [%d] is %c", i, ch[i]);
		
    }
	
	return 0;
}
