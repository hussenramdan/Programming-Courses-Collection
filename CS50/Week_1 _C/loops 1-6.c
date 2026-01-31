#include <stdio.h>
#include <cs50>

int main(void){

// while loop
    int i = 0;      // start
    while(i <= 3)   // conditon
{
    printf("meow\n");
    i++;            // steps
}   

// for loop
    for(int i = 0 ; i < 3 ; i++ )
    {
        printf("meow\n");
    }


// for loop with even numbers
    for(int i = 0 ; i <= 10 ; i += 2){
        printf( "%i\n", i);
    }

}