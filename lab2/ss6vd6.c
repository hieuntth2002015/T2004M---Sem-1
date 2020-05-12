#include<stdio.h>
int main() {
	int a;
	float d;
	char ch, name[40];
	printf(" Vui long cho nhap du lieu\n");
	scanf("%d %f %c %s", &a, &d , &ch, name);//value: gia tri, accept: chap nhan.
	printf("\n Gia tri duoc chap nhan : %d, %f, %c, %s ", a, d, ch, name);
return 0;
}
