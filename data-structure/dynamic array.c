#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = malloc(4 * sizeof(int));
    if (list == NULL){
        return 1;
    }
    for (int i = 0;i < 4;i++){
        *(list + i) = i+1;
    }
    int *temp = realloc(list,5 * sizeof(int));
    if( temp == NULL){
        free(list);
        return 1;
    }
    list = temp;
    *(list + 5) = 12;
    free(list);
    return 0;
}