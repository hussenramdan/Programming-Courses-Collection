#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[3];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    int tmp[4];
    for(int i = 0; i < 3; i++){
        tmp[i] = list[i];
    }
    tmp[3] = 4;
    for(int i = 0; i < 4; i++){
        printf("%i\n" , tmp[i]);
    } 
}


int main(){
    int *list = mslloc(3*sizeof(int));
    if(list == NULL){
        return 1;
    }

    *list = 1;
    *(list +1) = 2;
    *(list +2) = 3;
    
    // int *tmp = malloc(4*sizeof(int));
    int *tmp = realloc(list,4*sizeof(int));

    if(tmp == NULL){
        free(list);
        return 1;
    }
    // for(int i = 0; i < 3; i++){
    //     tmp[i] = list[i];
    // }
    // free(list);
    tmp[3] = 4;
    list = tmp ;
    for(int i = 0; i < 4; i++){
        printf("%i\n" , list[i]);
    }
    free(list);
}

