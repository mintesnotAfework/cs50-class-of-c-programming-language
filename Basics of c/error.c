#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *y;
    int *x;

    y = malloc(sizeof(int));
    *y = 12;
    *x = 13;

    x = y;
    *x = 133;
    return 0;
}

/* 
  There are two bugs with in this code 
    1. we does not free the memory
    2. we try to assign a value into a pointer which is not intialized
*/

int main_solution(void){
    int *y;
    int *x;

    y = malloc(sizeof(int));
    *y = 12;
    // *x = 13;

    x = y;
    *x = 133;
    free(y);
    return 0;
}