#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct join{
	int day;
	int month;
	int year;
};

typedef struct {
	int id;
	char name[50];
	int salary;
	struct join date;
}employee;

void salary();
void check10year();

int main() {
	employee em[5] = {
	{1, "A", 3300, {8,5.2000}},
	{2, "B", 4000, {5,12,2001}},
	{3, "C", 5400, {8,5,1999}},
	{4, "D", 7400, {2,6,2002}},
	{5, "E", 1900, {3,6,1998}}
};
int i, choice;
printf(" Select operation below: ");
printf("\n1. Increase salary. ");
printf("\n2. Display the details of employees who complete 10 years with the company");
printf("\nEnter your choice: ");
scanf("%d", &choice);
if(choice==1)
    salary(em);
    if(choice==2)
    check10year(em);
}

void salary(employee em[]){
	int i;
	for(i=0; i<5; i++){
		if(em[i].salary <=2000)
		em[i].salary = em[i].salary*1.15;
		else if(em[i].salary <=5000 && em[i].salary >2000)
		em[i].salary = em[i].salary*1.1;
	 printf(" Salary of employee no. %d = %d\n", i+1, em[i].salary);
	}
}

void check10year(employee em[]){
	int i;
	for(i=0; i<5; i++){
		if(em[i].date.year <=2004){
			printf("\nID: %d", em[i].id);
			printf("\nName: %s", em[i].name);
			printf("\nSalary: %d", em[i].salary);
			printf("\nJoining date: %d%d%D", em[i].date.day, em[i].date.month,em[i].date.year);
		}
	}
}
