#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>

int main ()
{
char *ptr;
printf("Nhap vao ten con thu: ");
ptr=(char*)malloc(100*sizeof(char));
scanf("%s",ptr);
char* temp;
temp=(char*)malloc(100*sizeof(char));
strcpy(temp,"nhieu con ");
strcat(temp,ptr);
ptr=temp;
printf("\n%s",ptr);

getch();
return 0;
}

