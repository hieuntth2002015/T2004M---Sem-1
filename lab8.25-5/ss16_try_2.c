#include<stdio.h>
int giaithua(int n){
	if(n>0){
		return n*giaithua(n-1);
	}else{
		return 1;
	}
}
int main(){
	int a;
	printf(" Nhap vao so can tinh giai thua: ");
	scanf("%li", &a);
	printf(" giai thua cua %d la %d", a, giaithua(a));
}
