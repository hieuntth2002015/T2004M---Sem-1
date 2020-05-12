#include <stdio.h>
#include <stdlib.h>
/* This program demonstrates the use of Modifiers in printf() */ 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf(" So 555 duoi nhieu hinh thuc khac nhau :\n");//various hinh thuc khac nhau//
	printf(" Khong co bat ki sua doi :\n");// Without any modifier//
	printf(" [%d]\n", 555);
	printf(" Sua- voi sua doi : \n");//With - modifier//
	printf(" [%-d]\n", 555);
	printf(" Voi chuoi so 10 la cong cu sua doi  : \n");//With digit string 10 as modifier//
	printf(" [%10d]\n", 555);
	printf(" voi so 0 la sua doi : \n");//With 0 as modifier//
	printf(" [%0d]\n", 555);
	printf(" voi chuoi day so 10 va 0 la cong cu sua doi :\n");//digit string: day chu so//
	printf(" Voi -, 0 và chuoi 10 chu so làm công cu sua doi: \n");//With -, 0 and digit string 10 as modifiers//
	printf("[%-010d]\n", 555);
	return 0;
}
