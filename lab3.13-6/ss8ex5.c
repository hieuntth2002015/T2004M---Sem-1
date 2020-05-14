#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char grade;
	float com = 0,sales_amt;
    
	printf(" Nhap san luong ban ra : ");// sales amount: san luong ban ra//
	scanf("%f", &sales_amt);
	fflush(stdin);
	printf(" Nhap loai : ");
	scanf("%c", &grade);

	
	
	if(sales_amt >10000)
	{
		if(grade == 'A')
		com = sales_amt * 0.1;
		else 
		com = sales_amt * 0.08;
	}else
	    com = sales_amt * 0.05;
	printf("\nTien hoa hong la %.2f", com);
	return 0;
}
