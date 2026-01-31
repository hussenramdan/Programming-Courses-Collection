#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int main(void){
//     string names[] = {"ahmed" , "david"};
//     sreing numbers[] = {"012456" , "010123"};
//     for(int i = 0 ; i < 2 ; i++ ){
//         if(strcpm(names[i] , "ahmed") == 0 ){
//             printf("found %s\n" , numbers[i]);
//             return 0;
//         }
//     }
//     printf("not found");
//     return 1 ;
// }




struct phonebook{
    string name;
    string number;
    int age ;
};



int main(void){
   
    struct phonebook[2];
    people[0].name = "ahmed";
    people[0].number ="012456";
    people[0].age   = 20;

    people[1].name = "dvid";
    people[1].number = "010123";
    people[1].age   = 19;

    for(int i = 0 ; i < 3 ; i++ ){
        if(strcpm(people[i].name , "ahmed") == 0 ){
            printf("found %s\n" , people[i].number);
            return 0;
        }
    }
    printf("not found");
    return 1 ;
}