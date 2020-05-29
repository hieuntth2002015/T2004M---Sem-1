#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	struct strucintcal//xacdinh cau truc//
	{
		char name[20];
		int numb;
		float amt;
	}xyz;// Khia bao 1 bien//
	void intcal(struct strucintcal);
    
	//Accepts: chap nhan du lieu vao cau truc//
	printf("\n Enter customer name ");// customer //
	gets(xyz.name);
	printf("\n Nhap ma so khach hang: ");
	scanf("%d", &xyz.numb);
	printf("\nEnter Principal amount: ");//Nhap so tien goc//
	scanf("%f", &xyz.amt);
	intcal(xyz);//Truyen cau truc cho ham//
	
	}
void intcal(struct {
	char name[20];
	int numb;
	float amt;
	} abc)
{
	float si, rate = 5.5, yrs=2.5;
	//Tinh lai //
	si= (abc.amt *rate * yrs) / 100;
	printf("\n The customer name is %s", abc.name);
	printf("\n The customer number is %d", abc.numb);
	printf("\n The amount is %f", abc.amt);
	printf("\n The interest is %f", si);
	return;
}

