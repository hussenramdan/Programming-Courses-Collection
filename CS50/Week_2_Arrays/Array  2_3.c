#include <stdio.h>
// $include <cs50.h>

// int main(void){
// int score1 = 72;
// int score2 = 73;
// int score3 = 33;
// printf("Average %f\n" , (score1 + score2 + score3)/3.0);
// }


int main(void){
    // int scores[3] = {72, 73, 33};

    int length = get_int("how many score? ");
    int scores[length];
    int result = 0;
    for(int i = 0; i < length ; i++){
        scores[i] = get_int("number: ");
        result += scores[i]
    }
    printf("Average %f\n" , result / (float) length );
}

