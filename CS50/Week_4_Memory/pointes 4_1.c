#include <stdio.h>

int main(void){

    int n = 50;
    int *p = &n;

    printf("%p \n" , *&n);  // value 50

    printf("%p \n" , p);    // hexadesimal 
    printf("%p\n" , *p);
}