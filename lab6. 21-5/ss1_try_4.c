#include<stdio.h>
int main() {
	int n = 5, a[] = {34, 45, 56, 67, 78, 89};
	int i,j;
	printf(" Mang ban dau: ");
	for(i=0; i<n;i++)
	{
	printf("%d\t", a[i]);
    }
    
	for(i=0,j=n-1; i<=j; i++, j--)
	
	printf("\nmang dao nguoc ");
	for(i=0; i<n;i++)
	{
	     printf("%d\t", a[i]);
    }
	return 0;
}
