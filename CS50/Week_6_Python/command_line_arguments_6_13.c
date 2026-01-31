#include <stdio.h>
#include <cs50.h>

int main(int argc , string argv[]){
    // ["argv", "ahmed"]
    if(argc == 2){
        printf("hello %s\n", argv[1]);
    }
    else{
        printf("Hello World\n");
    }
    
}