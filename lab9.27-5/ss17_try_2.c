#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	int n,i;
	float num[10000], sum= 0.0, avg;
	
	printf(" Nhap cac so can tinh: ");
	scanf("%d", &n);
	for(i=0; i<n;i++)
	{
	   for(i=0; i<n;i++)
	   {
	      printf("%d. Nhap so: ", i+1);
	      scanf("%f", &num[i]);
	      sum += num[i];
		}
	}
    avg= sum/n;
    printf(" trung binh = %.2f", avg);
    return 0;
}
