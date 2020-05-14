#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mona, monb, monc;
	float dtb;
	printf(" Nhap diem mon a : ");
	scanf("%d", &mona);
	printf(" Nhap diem mon b : ");
	scanf("%d", &monb);
	printf(" Nhap diem mon c : ");
	scanf("%d", &monc);
	dtb = (mona+monb+monc)/3;
	printf(" Diem trung binh 3 mon la = %.2f\n",dtb );
	if (dtb>=90)
	printf(" Dat loai E+");
	else if (dtb>=80)
	printf("dat loai E");
	else if (dtb>=70)
	printf(" dat loai A+");
	else if (dtb >=60)
	printf(" dat loai A");
	else if (dtb >=50)
	printf(" dat loat B+");
	else if (dtb <50)
	printf(" Loai || Fail:");
	
	return 0;
}
