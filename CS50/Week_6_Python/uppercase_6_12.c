#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){

    // 1_ get string form user
    string before = get_string("before: ");
    //2_   convert string to uppercase
    print("after: ");

    for(int i = 0; i < strlen(before); i++){
    print("%c", toupper(before[i]));
    }

    print("/n")
}