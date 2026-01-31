#include <stdio.h>

int main(void){
    int numbers[] = {4,6,2,8,1,0};
    for(int i = 0 ; i < 6; i++){
        if(numbers[i] == 0){
            printf("Found/n");
            return 0;
        }
    }
    printf("Not Found/n");
    return 1;
}