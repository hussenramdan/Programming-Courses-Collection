#include <stdio.h>
// #include <cs50.h>

intt main(void){

    int n = get_int("n: ");

    if(n % 2 == 0){
        printf(even\n);
    }
    else{
        printf("odd\n");
    }
}







// Agree_
int main(void){

    char c = get_char("Do You Agree? ");
    if(c == 'y' || c == 'Y' ){
        printf("Agreed\n");
    }
    else is(c == 'n' || c == 'N'){
        printf("Not Agreed\n");
    }
}