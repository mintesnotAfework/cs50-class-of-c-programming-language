#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *mintesnot = malloc(3 * sizeof(int));  // is the same as int name[3];
    if(mintesnot == NULL){
        return 1;
    }
    mintesnot[0] = 12;
    mintesnot[1] = 12;
    mintesnot[2] = 12;
    free(mintesnot);
    return 0;
}