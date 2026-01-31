#include <stdio.h>
#include <cs50.h>

float discount(float price , int percent);
int main(void){

    float regular = get_float("regulae price:  ");
    int percent = get_int("percent of: ");
    // float sale = regular * .85;
    float sale = discount(regular , percent);
    printf("sale price = %.2f\n", sale);
}



float discount(float price , int percent){
    // float sale = price * .85;
    // return sale;
    return price * (100 - percent)/100;
}
