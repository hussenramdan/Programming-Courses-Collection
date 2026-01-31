#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if(argv != 2){
        printf("Missing Command line argument");
        // exit the program
        return 1;

    }
    printf("hello %s/n", argv[1]);
    return 0;
}