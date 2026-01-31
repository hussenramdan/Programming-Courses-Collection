#include <stdio.h>
#include <cs50.h>

// int main(void){
//     int i = get_int("i: ");
//     int j = get_int("j: ");
//     if(i == j){
//         printf("same\n");
//     }
//     else{
//         printf("Different\n");
//     }

// }


// int main(void){
//     string s = get_string("s: ");
//     string t = get_string("t: ");
//     if(s == t){
//         printf("same\n");
//     }
//     else{
//         printf("Different\n");
//     }

// }


int main(void){

    char *s = get_string("s: ");
    char *t = get_string("t: ");
    // if(strcmp(*s == *t){
    if(strcmp(s , t) == 0){
        printf("same\n");
    }
    else{
        printf("Different\n");
    }

}