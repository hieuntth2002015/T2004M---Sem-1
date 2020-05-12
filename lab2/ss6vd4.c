#include <stdio.h>
/* Chuong trinh chi hien thi cong cu sua doi voi chuoi*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {//string: chuoi//
	printf(" mot chuoi trong nhieu mau khac nhau :\n ");
	printf(" Khong co lenh dinh dang nao");// without : khong co , format : dinh dang, command : lenh//
	printf(" Chao ngay moi mr.lee.\n");
	printf(" Voi lenh dinh dang nhung khong can sua doi : \n");
	printf("[%s]\n", "Chao ngay moi Mr.lee.");
	printf(" Voi chuoi so 4 lam cong cu sua doi :\n ");
	printf("[%4s]\n","Chao ngay moi Mr.Lee");
	printf(" voi chuoi so 19 lam cong cu sua doi: \n");
	printf("[%19s]\n","chao ngay moi Mr.Lee.");
	printf("Sua doi voi day chuoi 23 :\n");
	printf("[%23s]\n","Chao ngay moi Mr.Lee.");
	printf("sua doi voi day chuoi 25.4 :\n");
	printf("[%25.4s]\n","Chao ngay moi Mr.Lee.");
	printf("Sua doi voi - va day chuoi 25.4 :\n");
	printf("[%-25.4s]\n","Chao ngay moi Mr.shroff.");
	return 0;
}
