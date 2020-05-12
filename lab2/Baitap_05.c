#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float top, bottom, height;
	float S;
	printf(" ====Baitap_05====\n");
	printf(" Please enter value of top:  ");
	scanf("%f", &top);
	printf(" Please enter value of bottom: ");
	scanf("%f", &bottom);
	printf(" Please enter value of height: ");
	scanf("%f", &height);	
	
	S= (top+bottom)*height;
	
	printf(" Dien tich cua hinh thang = %.2f", S);
	return 0;
}
