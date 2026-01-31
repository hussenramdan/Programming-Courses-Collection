#include <stdio.h>
#include <cs50.h>

int main(void){
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    printf("%i %i %i\n" , c1,c2,c3);
}

int main(void){
    string s = "HI!";
    printf("%i %i %i\n" , s[0] , s[1] , s[2]);

}

int main(void){
    string s = get_string("text: ");
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    printf("%i\n" ,i);
}