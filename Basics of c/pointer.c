#include <stdio.h>

// typedef struct {char *s;}string;
int main(void){
    int n = 50;
    int *p = &n;
    *(p+1) = 100;
    printf("%d %d\n",*(p),*(p+1));
    // string name;
    // name.s="mintesnot afework";
    // printf("%d\n",*(p+122222222222222)); // segementation error


    char *name = "mintesnot";
    for ( int i = 0;i < 10;i++){
        printf("%s\n",name + i);
    }
    return 0;
}

// 50 100
// mintesnot
// intesnot
// ntesnot
// tesnot
// esnot
// snot
// not
// ot
// t