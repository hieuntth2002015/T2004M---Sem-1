#include <stdio.h>
 int i;
void nhap(int a[], int n)
	
{

    for ( i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for ( i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for ( i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main()
{
    int a[1000];
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    nhap(a, n);
    printf("\nMax = %d", max(a, n));
    printf("\nMin = %d", min(a, n));
    return 0;
}
 
