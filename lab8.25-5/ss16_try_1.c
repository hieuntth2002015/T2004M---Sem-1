#include<stdio.h>
#include<string.h>
float area(float x){
	float area;
	area = x*x*3.14;
	return area;
}
float perimeter(float y){
	float perimeter;
	perimeter = y*2*3.14;
	return perimeter;
}
int main(){
	float r;
	float a, b;
	
	printf(" Nhap ban kinh r : ");
	scanf("%f", &r);
	
	a = area(r);
	printf(" dien tinh hinh tron la : %.2f\n", a);
	
	b = perimeter(r);
	printf(" Chu vi hinh tron la : %.2f\n", b);
	return 1;
}
