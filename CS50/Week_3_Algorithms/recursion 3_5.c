#include <stdio.h>
// #include <cs50.h>
// void rec(int n);
void draw(int n);



// int main(void){
//     rec(3);
// }

// void rec(int n){
//     if(n == 0){
//         return;
//     }
//     printf("hello world\n");
//     rec(n - 1);
// }


int main(void){
    int height = get_int("height: ");
    draw(height);
}

void draw(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            printf("#");
        }
    printf("\n");
    }
}


void draw(int n){
    if(n <= 0){
        return;
    }
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
    draw( n - 1);
}
