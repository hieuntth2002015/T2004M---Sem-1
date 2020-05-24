#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[7][25];
	int i,j;
	char temp[25];
	printf("Nhap cac ten: \n");
	for(i=0; i<7;i++)
	{
		
		printf("Ten %d : ", i+1);
		fflush(stdin);
		gets(name[i]);
    }
	printf(" sap xep theo thu tu tang dan: ");
		for(i=0;i<6;i++)
		{
			for(j=i+1; j<7; j++)
			if(strcmp(name[i], name[j])>0)
		{
			strcpy(temp,name[i]);
			strcpy(name[i], name[j]);
			strcpy(name[j], temp);
		}
	    }
			printf("Danh sach sau khi sap xep:");
			for(i=0;i<7;i++)
            printf("\n%s", name[i]);	
		}
		

