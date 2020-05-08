#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r;
	float pi= 3.14;
	float dientich, chuvi;
	
	    printf("Nhap ban kinh r : ");
	    scanf("%d", &r);
	    
	dientich= r*r*pi;
	chuvi= 2*r*pi;
	
	    printf(" Dien tich hinh tron la : %f\n", dientich);
		printf(" Chui vi hinh tron la : %f", chuvi);
	
	return 0;
}
