#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan, ly, hoa;
	float tong_diem, diem_trung_binh;
	printf("======Baitap_06======\n");
	printf(" Nhap dien mon toan: ");
	scanf("%f", &toan);
	printf("Nhap diem mon ly: ");
	scanf("%f", &ly);
	printf("Nhap dien mon hoa:\n");
	scanf("%f", &hoa);

	tong_diem= toan+ly+hoa;
	diem_trung_binh= (toan+ly+hoa)/3;
	
	printf(" Tong diem cua 3 mon = %.2f\n", tong_diem);
	printf(" Diem trung binh cua 3 mon = %.2f", diem_trung_binh);	
	return 0;
}
