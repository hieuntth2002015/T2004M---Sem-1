#include<stdio.h>
#include<stdlib.h>
int main() {
    char Ho[50], Ten[50];
    printf(" Ho cua ban la: ");
    scanf("%s", &Ho);
    printf(" Ten cua ban la: ");
    scanf("%s", &Ten);
    
    printf(" Ho va ten cua ban la: %s %s", Ho, Ten);
    return 0;
}
