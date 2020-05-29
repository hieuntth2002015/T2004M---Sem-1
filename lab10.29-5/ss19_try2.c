#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	char* name;
	int diem;
};
int comparator(const void* p, const void* q)
{
	return strcmp(((struct student*)p)->name,
                 (( struct student*)q)->name);
}

int main()
{
	int i=0,n=5,j;
	struct student arr[n];
	int tg;
	int diem[100];
	
	arr[0].name = " Hoa";
	arr[0].diem=70;
	
	arr[1].name= " Mai";
	arr[1].diem=90;
	
	arr[2].name = " Cuc";
	arr[2].diem= 78;
	
	arr[3].name= " Ly";
	arr[3].diem = 87;
	
	arr[4].name= " Hong";
	arr[4].diem= 80;
	
	printf(" Khi chua sap xep : \n");
	for(i=0;i<n;i++)
	{
		printf(" name = %s, diem = %d \n",
		arr[i].name, arr[i].diem);
	}
	
	qsort(arr, n , sizeof(struct student), comparator);
	
	printf("\n\n Khi da xep xep xong : \n");
	
    for( i = 0; i < n - 1; i++){
        for( j = i + 1; j < n; j++){
            if(diem[i] < diem[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = diem[i];
                diem[i] = diem[j];
                diem[j] = tg;        
            }
        }
    }
	{
		printf(" Name = %s, diem = %d\n",
		arr[i].name, arr[i].diem);
		 for(i = 0; i < n; i++){
        printf("%5d", diem[i]);
    }
	} 
	return 0; 
}	
