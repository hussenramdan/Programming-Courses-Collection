#include <stdio.h>
#include <cs50.h>

// int main(int argc , string argv[]){
//     if(argc == 2){
//          printf("Hello %s\n" , argv[1]);
//     }else{
//         printf("hello world\n");
//     }
// }

int main(int argc , string argv[]){
    if(agrc != 2){
        printf("issing command line argument\n");
    return 1;
    }
    
    printf("hello %s\n" , agrv[1]);
    return 0;
}