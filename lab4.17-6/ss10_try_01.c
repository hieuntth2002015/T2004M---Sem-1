#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tuoi,n;
	printf("Nhap so tuoi cua mot nguoi : ");
	scanf("%d", &n);
	for(tuoi =0; tuoi<=n ;tuoi+=1)
	printf(" ì  Nguyen Trung Hieu ì á à ã  :\n ", tuoi);
	return 0;
}
