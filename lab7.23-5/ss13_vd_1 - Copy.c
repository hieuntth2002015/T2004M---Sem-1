#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(int argc, char *argv[]) {
	int var = 500, *ptr_var;// var dc khia bao la so nguyen va ptr_var la con tro den so nguyen//
	
	ptr_var = &var;// luu tru dia chi cua var trong ptr_var//
	// In gia tri caua bien var va dia chi cua bien do duoc luu tru//
	printf(" Gia tri %d duoc luu tru tai dia chi %u:\n", var, &var);
	//in gia tri trong bien ptr va dia chi noi luu tru//
	printf(" Gia tri %u duoc luu tai dia chi: %u\n", ptr_var, &ptr_var);
	//in gai tri cua var va dia chi noi var duoc luu tru va su dung con tro dem chu//
	printf(" Gia tri %d duoc luu  tai dia chi: %u", *ptr_var, ptr_var);
}
