#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *name = "Mark";
	int basic, daper;
	float bonper, loandet;
	float salary;
	basic =2500;
	daper=55;
    bonper=33.33;
    loandet=25.00;
	
	printf(" Name    Basic  Salary\n");
	
	salary = basic + basic*daper/100+bonper*basic/100-loandet;
	printf(" %s    %d   %g", name, basic, salary);
	return 0;
}
