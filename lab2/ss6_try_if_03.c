#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int breadth;
	float length, height;
	scanf(" %d%f%6f\n", &breadth, &length, &height);
	printf("%d %f %e", breadth, length, height);
	return 0;
}
