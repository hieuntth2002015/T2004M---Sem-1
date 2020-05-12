#include<stdio.h>
int main() {
 int d;
 char ch;
 double lf;
 float f;
   printf("/*===== Kich thuoc cua cac kieu du lieu ==========*\\n");
   printf("\nKieu char: %d byte", sizeof(char));
        printf("\nKy tu: ");
        scanf("%c", &ch);
   
   printf("\nKieu int la: %d byte", sizeof(int));
        printf("\nSo nguyen: ");
        scanf("%d", &d);

   printf("\nKieu float la: %f byte", sizeof(float));
        printf("\nSo thuc kieu float: ");
        scanf("%f", &f);
   
   printf("\nKieu double la: %lf byte", sizeof(double));
        printf("\nSo thuc kieu double: ");
        scanf("%lf",&lf);
   
   printf("\nKieu long int: %li byte", sizeof(long int));
   printf("\nKieu long double: % byte", sizeof(long double));
   
   
   return (0);
}
