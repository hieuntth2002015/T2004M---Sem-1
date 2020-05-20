#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sl, giatien;
	int order;
	int y;
	do {
	    printf("===== Menu =====\n");
	    printf("\n1.Sg Cafe\n2.Sg cafe milk\n3.espressso\n4.cappuccino"
		"\n5.latte\n6.cookies N Cream\n0. Ket thuc\n");
		printf("1.Nhap mon do can uong:\n ");
	    scanf("%d", &order);
    	
    	switch(order)
    	{
    		case 1: 
    		    printf("Ban da chon Sg cafe\n");
    		    giatien += 15000;
    		     fflush(stdin);
    		    printf("2.Nhap so luong:\n ");
	            scanf("%d", &sl);
    		    break;
    		case 2:
    			printf(" Ban da chon sg cafe \n");
    			giatien += 18000;
    			 fflush(stdin);
    			printf("2.Nhap so luong:\n ");
	            scanf("%d", &sl);
    			break;
    		case 3:
    			printf(" Ban da chon espresso\n");
    			giatien += 18000;
    			 fflush(stdin);
    			printf("2.Nhap so luong:\n ");
	            scanf("%d", &sl);
    			break;
    		case 4: 
    		    printf(" Ban da chon cappuccino\n");
    		    giatien += 25000;
    		     fflush(stdin);
    		    printf("2.Nhap so luong:\n ");
	            scanf("%d", &sl);
    		    break;
    		case 5: 
    		    printf(" Ban da chon latte\n");
    		    giatien += 25000;
    		     fflush(stdin);
    		    printf("2.Nhap so luong:\n ");
	            scanf("%d", &sl);
    		    break;
    		    
	    }
		printf("\nBan co muon tiep tuc order khong (Y/N) ?\nNeu ban khong muon tiep tuc hay bam (0) : ");
		scanf("%d", &y);
    }while( y != 0);
       printf("\nSo tien can thanh toan la : %d VND", giatien);
       printf("\nCam on quy khach da su dung!\n");
   return 0;
}
