#include <stdio.h>
// #include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *s = get_srting("s: ");                    // 0x123
    char *t = malloc(strlen(s) + 1);                // 0x123
    if(t == NULL){
        return 1;
    }

    // for(int i = 0; i < strlen(s) + 1 ; i++){
    //     t[i] = s[i];
    // }

    srtcpy(t,s);


    t[0] = toupper(t[0]);
    printf("s: %s\n" , s);
    printf("t: %s\n" , t);

    free(t);
}