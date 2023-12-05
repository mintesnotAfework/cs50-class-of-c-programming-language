#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
// #include <

int main(void){
    string name_1 = get_string("s: ");
    if (name_1 == NULL){
        return 1;
    }
    string name_2 = malloc(strlen(name_1) + 1);
    if ( name_2 ==NULL){
        return 1;
    }
    int size = strlen(name_1);
    // for ( int i = 0;i < size + 1;i++){
    //     name_2[i] = name_1[i];
    // }
    strcpy(name_1,name_2);
    if (strlen(name_2) > 0){
        name_1[0] = toupper(name_1[0]);
    }
    printf("%d", name_1 == name_2);
    printf("%d", strcmp(name_1,name_2));


    free(name_2);     // it free the memmory created by malloc
    return 0;
}