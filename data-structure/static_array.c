#include <stdio.h>
#include <stdlib.h>

int main(void){
    int list[10];
    for (int i = 0;i < 10;i++){
        list[i] = i + 23;
    }
    int modified_list[11];
    for (int i = 0;i < 10;i++){
        modified_list[i] = list[i];
    }
    modified_list[10] = 12;

    // second option
    int *lists = malloc(sizeof(int) * 10);
    if ( lists == NULL){
        return 0;
    }
    for (int i = 0;i < 10;i++){
        lists[i] = i + 23;
    }
    int *modified_lists = malloc(sizeof(int) * 11);
    if ( modified_lists == NULL){
        free(lists);
        return 0;
    }
    for (int i = 0;i < 10;i++){
        modified_list[i] = lists[i];
    }
    free(lists);
    lists = modified_lists;
    lists[10] = 100;
    free(lists);
    return 0;
}