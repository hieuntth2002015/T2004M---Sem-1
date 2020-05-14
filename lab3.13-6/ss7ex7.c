#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	    int masanpham;//productcode//
	    float giatridathang, tygia = 0.0;//orderamount: giatridat hang, rate: tyle, tygia//
	    printf(" please enter the product code : ");// Vui lonh nhap ma san pham vao//
	    scanf("%d", &masanpham);
	    printf(" Please enter the order amount : ");
	    scanf("%f", &giatridathang);
	    
	    if (masanpham ==1)
	       {
		    if (giatridathang >= 500 )
	         tygia = 0.12;
	        else if (giatridathang >=300 )
	         tygia = 0.08;
	        else 
	         tygia = 0.02;
		   }
		else if (masanpham ==2)
		   {
		    if (giatridathang >= 2000)
		    tygia = 0.10;
		    else if ( giatridathang >=1500)
		    tygia = 0.05;
	       }
	    else if( masanpham ==3)
	       {
		   if (giatridathang >=5000)
	       tygia = 0.10;
	       else if(giatridathang >=2500)
	       tygia = 0.05;
		   }
		giatridathang -= giatridathang * tygia;
		printf(" So luong da dat hang roi %.2f\n", giatridathang);

	return 0;
}
