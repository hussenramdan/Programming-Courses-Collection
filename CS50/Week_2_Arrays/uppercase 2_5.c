#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){
    string s = get_string("Before: ");
    printf("After: ");
        for(int i = 0; i < strlen(s); i++){
            // if(s[i] >= 'a' && s[i] <= 'z'){
               if(islower(s[i]) == 0){
                  printf("%c" , toupper(s[i]));
                  printf("%c" , tolower(s[i]));
            // }else{
            //     printf("%c" , s[i]);
            //    }
            // }
        }
        printf("\n");
}