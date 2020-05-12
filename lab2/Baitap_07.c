#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int luachon;
	printf("===============Baitap_07================\n");
	do
	{
	printf("\n=================Menu===================\n1.Tinh dien tich va chu vi hinh tron."
	"\n2.Tinh dien tich va chu vi hinh vuong.\n3.Tinh dien tich va chu vi hinh chu nhat."
	"\n0.Thoat.\nBam Chon ?\n");
	scanf("%d", &luachon);
	
	switch(luachon) 
	   {
	     case 0 : break;
	     case 1 : {
	        float pi=3.14;
	        float r;
	           printf(" Nhap ban kinh r : ");
	           scanf("%f", &r);
	           
			   printf(" Chu vi hinh tron la : %.2f\n", pi*r*r);
	           printf(" Dien tich hinh tron la : %.2f\n", 2*pi*r);
	           break;
	       }
	     case 2:{
	        float canhhinhvuong;
	           printf(" Nhap canh hinh vuong : ");
	           scanf("%f", &canhhinhvuong);
	          
	           printf(" Chu vi hinh vuong la : %.2f\n", 4*canhhinhvuong);
           	   printf(" Dien tich hinh vuong la : %.2f\n", canhhinhvuong*canhhinhvuong);
           	   break;
           }
	     case 3: {
	        float chieudai, chieurong;
	           printf(" Nhap chieu dai hinh chu nhat : ");
	           scanf("%f", &chieudai);
			   printf(" Nhap chieu rong hinh chu nhat : ");
	           scanf("%f", &chieurong);
	
	           printf(" Chu vi hinh chu nhat la : %.2f\n", (chieudai+chieurong)*2);
	           printf(" Dien tich hinh chu nhat la : %.2f\n", chieudai*chieurong);
	           break;
	       }
	   }
   }while(luachon !=0);
	       return 0;
}

