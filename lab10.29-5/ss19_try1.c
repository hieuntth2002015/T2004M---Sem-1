#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	int number;
	char name[20];
	float rate;
	int quantity;
}inventory;

int main() {
	inventory item[5];
	int i;
	float price[5], total;
	for(i=0;i<5;i++)
	{
		printf("Muc %d's ma so :", i+1);
		scanf("%d", &item[i].number);
		ffush(stdin);
		printf("Muc %d's ten:", i+1);
		gets(item[i].name);
		printf("Muc %d's rate ", i+1);
		scanf("%f", &item[i].rate);
		printf("Muc %d's quantity: ", i+1);
		scanf("%d", &item[i].quantity);
		printf("___________________________\n");
		
	}
	for(i=0;i<5;i++){
		price[i]= item[i].rate*item[i].quantity;
		total += price[i];
		printf(" Muc %d la %s , Tong = %f\n", i+1, item[i].name, price[i]);
	}
	printf(" Tong gia tri cua kho hang la = %f", total);

}
