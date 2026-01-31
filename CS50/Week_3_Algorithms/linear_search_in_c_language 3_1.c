#include <stdio.h>
#include <cs50.h>
#include <string.h>


// int main(void){
    // int numbers[] = {4,6,8,2,7,5,0};

    // linear search 
    // for(int i = 0 ; i < 7 ; i++){
    //     if(numbers[i] == 8){
    //         printf("found\n");
    //         printf("found in %i steps\n" , i + 1);
    //         return 0;
    //     }
    // }
    // printf("not found\n");
    // return 1;
// }


int main(void){
    string names[] = {"ahmed" , "gamal" , "mazen" , "ail" , "mai" , "maeiam" , "sara"}

// linear search 
    for(int i = 0 ; i < 7 ; i++){
        if(strcpm(names[i] , "ali") == 0){
            printf("found\n");
            printf("found in %i steps\n" , i + 1);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}