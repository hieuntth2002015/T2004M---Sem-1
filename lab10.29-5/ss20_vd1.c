#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct book_st { 
     int book_cd;
     char book_nm[30];
     char author[30];
     int copies;
	 };
     
struct date_st {
     	int month;
     	int day;
     	int year;};
struct tran_st {
	int book_code;
	char tran_type;
    struct date_st tran_dt;};
    
int main()
{
int choice=1,i;
char addflag;
struct book_st books[5];
struct tran_st trans[10];

while(choice !=4)
{
	printf("\nSelcet form Menu\n1. Add boook names\n2.  REcord Issue/Return\n "
	"3. Sort Transcations\n 4. Exit\n\n Enter choice: ");
	scanf("%d", &choice);
	if(choice==1)
	{
		addflag='y';
		for(i=0; i<5 && addflag=='y'; i++)
		{
			books[i].book_cd=i+1;
			printf("\n\n Book code: %d\n\nBook name: ", i+1);
			scanf("%s", books[i].book_nm);
			printf("\nAuthor: ");
			scanf("%s", books[i].author);
			printf("\nNumberof copies: ");
			scanf("%d", &books[i].copies);
			printf("\n\nContinue? (y/n): ");
			scanf("%c", &addflag);
		}
	}
	else if(choice==2)
	{
		addflag='y';
		for(i=0; i<10 && addflag == 'y'; i++)
		{
			printf("\n\n Book code: ");
			scanf("%d", &trans[i].book_code);
			printf("\nInssue or Return?(I/R): ");
			scanf("%c", &trans[i].tran_type);
			printf("\nDate:");
			scanf("%d %d %D", &trans[i].tran_dt.month, &trans[i].tran_dt.day,
			&trans[i].tran_dt.year);
			printf("\n\nContinue? (y/n): ");
			scanf("%c", &addflag);
		}
	}
	else if(choice==3)
	{
		sorttran(trans);}
	}
	return 0;
}
sorttran(struct tran_st tran[10])
{
	int i,j,tempcode;
	struct tran_st temptran;
	for(i=0;i<10;i++)
	    for(j=i+1; i<10; j++)
	    {
	    	if(tran[i].book_code>tran[j].book_code)
	    	{
	    		temptran=tran[i];
	    		tran[i]=tran[j];
	    		tran[j]= temptran;
			}	
		}for(i=0,j=0; i<10; j=0)
		{
			tempcode=tran[i].book_code;
			while(tran[i].book_code==tempcode && i<10)
			{
				j++;
				i++;
			}
			printf("\nBook code %d had %d transactions ", tempcode, j);
		}
		
}
