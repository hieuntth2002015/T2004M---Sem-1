#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	char i, ans;
	i = ' ';
	do 
	{
		x = 0;
		ans = 'y';
		printf("\n Enter sequence of character: ");//sequence: su noi tiep//
     	do{
            i = getchar();
			x++;
		}while (i != '\n');
		i = ' ';
		printf("\nNumber of chracters entered is: %d", --x);
		printf("\nMore sequences (Y/N) ?");
		ans= getchar();	
	
	}while(ans == 'Y' || ans =='y');
    
}
	
