#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf(" So 555.55  trong nhieu hinh thuc khac nhau :\n");
	printf(" O dang float khong can sua doi:\n");//In float form without modifiers//
	printf("[%f]\n", 555.55); 
	printf(" O dang ham mu ma khong can sua doi");//In exponential form without any modifier//
	printf("[%e]\n",555.55);
	printf(" dang float voi sua doi :\n");
	printf(" [%-f]\n ", 555.55);
	printf(" dang float voi 0  va day so 10.3");
	printf("[%10.3f]\n",555.55);
	printf("dang float sua doi voi chuoi day so 0 : \n");
	printf("[%0f]\n",555.55);
	printf(" dang float sua doi voi chuoi day so 10.3 va chuoi 0 ");
	printf(" Sua doi : \n");
	printf("[%010.3f]\n",555.55);
	printf(" dang float voi -, 0 ");
	printf(" va sua doi trong day chuoi 10.3 :\n");
	printf("[%-010.3f]\n", 555.55);
	printf(" dang so mu voi 0 ");// exponential : so mu
	printf(" va sua doi voi day chuoi 10.3:\n");
	printf("[010.3e]\n", 555.55);
	printf(" dang so mu voi -, 0");
	printf(" va sua doi voi day chuoi 10.3 : \n");
	printf("[%-010.3e]\n\n", 555.55);
	return 0;
}
