#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int diem;
	printf(" Diem cua sinh vien : ");
	scanf("%d", &diem);
	
	if (diem>=75)
	  printf(" Sinh vien loai A");
	else if ( diem >=60 )
	  printf(" Sinh vien loai B");
	else if ( diem >=45 )
	  printf(" Sinh vien loai C");
	else if ( diem >=35)
	  printf(" Sinh vien loai D");
	else if ( diem <35)
	  printf(" Sinh vien loai E");
	return 0;
}
