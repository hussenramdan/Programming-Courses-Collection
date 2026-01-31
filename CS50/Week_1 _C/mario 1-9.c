#include <stdio.h>
#include <cs50.h>

int main(void){
    int count = -1;

    // Input validation
    do {
        count = get_int("count: ");
    } while(count < 1);

    // Print square
    for(int i = 0; i < count; i++){
        for(int j = 0; j < count; j++){
            printf("#");
        }
        printf("\n");
    }
}
