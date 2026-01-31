#include <stdio.h>
#include <cs50.h>

// 1_
void hello(int n){
    printf("%i\n", n);
}


int main(void){
    hello(10);
}

// 2_
void meow(int n){
    for(int i = 0 ; i < n ; i++){
    printf("meow\n");
    }
}

int main(void){
    meow(5);
}

// 3_
void sum(int n1 , int n2){
    int result = n1 + n2;
    printf("%i\n" , result);
}

int main(void){
    sum(5,7);
    sum(20,5);
    sum(13,4);
}


// 4_
int sum(int n1 , int n2){
    int result = n1 + n2;
    return result ;
}

int main(void){
    int x = sum(5,7);
    int result2 = x+8;
    printf("%i\n" , result2);
}


// 5_
void hello(void);

int main(void){
    hello();
}

void hello(void){
    printf("hello\n");
}