#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int use, pass;
	char tieptuc[10];
	int du = 1000000000;
    int luachon, sotien;
	
	printf(" Nhap tai khoan:\n ");
	scanf("%c", &use);
	fflush(stdin);
	printf(" Nhap mat khau:\n ");
	scanf("%c", &pass);
	fflush(stdin);
	if(use == 6123 && pass == 123)
	{
	printf("Dang nhap thanh cong\n");
	  do{
	    printf(" Nhap so tien can giao dich: \n");
	    scanf("%d", &luachon);
    
    switch(luachon)
    {
    	case 1: 
    	printf("\nNhap so tien mon rut: ");
    	scanf("%d", &sotien);
    	if(du >= sotien)
    	{
    		du -=sotien;
    		printf(" Ban da rut thanh cong %d \n so du con lai la: %d", du, sotien);
    	}
    	else
    	{
    		printf(" Tai khoan cua ban khong du vui long kiem tra lai ");
		}
		break;
		case 2: 
		printf(" so du cua ban hien tai la : %d", du);
		break;
	}
	printf("\nBan co muon tiep tuc khong(y/n)? \n");
	scanf("%s", &tieptuc);
}while(tieptuc != 'y');
printf(" Cam on quy khach ");

}
return 0;
}
