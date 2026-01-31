#include <stdio.h>
#include <cs50.h>
 void swap(int *a , int *b);

int main(void){
    int x = 1;
    int y = 2;

    // int tmp = x;    // tmp == 1 
    // x = y;           // x == 2
    // y = tmp;       // y == 1

    swap(&x , &y);

     printf("x: %i\n" , x);
    printf("y: %i\n" , y);
}


    void swap(int *a , int *b){
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
   