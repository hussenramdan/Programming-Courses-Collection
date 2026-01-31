#include <stdio.h>
#include <cs50.h>



int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i \n" , x / y);
}



    int main(void){
        const int x = 20;
        x = 30;
        printf("%i \n", x)
    }


int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%.5f \n" , (float)x / (float) y);
}