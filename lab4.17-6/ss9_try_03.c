#include<stdio.h>
#include<conio.h>
int main()
{
	int n1=0, n2=1, n3,i,sopt;
	printf(" Ban hay nhap so phan ty trong day Fibonacci: ");
	scanf("%d", &sopt);;
	printf("\n%d %d", n1, n2); // in ra 2 so 0 va 1
	
	for(i=2; i<sopt; i++) //Vong lap bat dau tu 2 boi vi 0 va 1 da duoc in
	{
		n3= n1+n2;
		printf("%d", n3);
		n1=n2;
		n2=n3;
	}
	printf("\n\n==============================\n");
	getch();
}
