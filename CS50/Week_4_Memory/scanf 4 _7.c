#include <stdio.h>
#include <stdlib.h>
// #include <cs50.h>

int main(void){

    // int x = get_int("enter a number: ");
    // printf("x %i \n" , x);


    int x;
    printf("x: ");
    scanf("%i" , &x);
    printf("x %i\n", x);

    char *s = malloc(5);
    printf("s: ");
    scanf("%s" , s);
    printf("s %s\n", s);
}

// 1_print a text
// 2_get a data