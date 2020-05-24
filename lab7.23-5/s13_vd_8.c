#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *ptr;
	int i;
	ptr = (int *) calloc(5, sizeof(int *));
	if(ptr!=NULL)
	{
		*ptr = 1;
		*(ptr+1) =2;
		ptr[2] = 4;
		ptr[3] = 6;
		ptr[4] = 16;
		// ptr[5]=32; se khong duoc chi dinh//
		ptr= (int *) realooc(ptr, 7*sizeof(int));
		if(ptr!=NULL)
		{
			printf("Phan bo bo nho nhieu hon ...\n ");
			ptr[5] = 32; //bay gio duoc chap nhan//
			ptr[6] = 64;
			for(i=0;i<7;i++)
			printf("ptr[%d] holds %d\n", i, ptr[i]);
		}
		realloc(ptr,0);// giong nhu mien phi(ptr); - nguoi ham mo!//
		return 0;
	}
	else
	{
	printf(" Khong du bo nho- realloc that bai. \n");
	return 1;
}
}
else
{
	printf(" Khong du bo nho - calloc that bai.\n");
	return 1;
}
}
