#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int A[10][10], B[10][10], C[10][10];
	int row, col;
	int i, j;
	printf("\n Nhap kich thuoc cua ma tran: ");
	scanf("%d %d", &row, &col);
	printf(" Nhap gia tri cua ma tran A and B: \n");
	for(i=0;i<row;i++)
	   for(j = 0;j < col; j++)
	   {
	   	printf("A[%d,%d], B[%d,%d]: ", i, j, i, j);
	   	scanf("%d %d", &A[i][j], &B[i][j]);
	   	C[i][j] = A[i][j] + B[i][j];
	   }
	   for ( i = 0; i < row; i++)
	       for(j = 0; j < col; j++)
	       {
	       	printf("\nA[%d, %d]= %d, B[%d,%d]= %d, C[%d, %d]]=%d\n", 
			i, j, A[i][j], i, j, B[i][j], i, j, C[i][j]);
		   }

}
