#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);
void swap_error(int a,int b);


int main(void){
    int x =12;
    int y = 13;
    printf("first --> %d second --> %d\n",x,y);
    swap_error(x,y);
    printf("first --> %d second --> %d\n",x,y);
    swap(&x,&y);
    printf("first --> %d second --> %d\n",x,y);

    return 0;
}

void swap_error(int a, int b){ // parameter by value
    int temp =a;
    a=b;
    b=temp;
}

void swap(int *a, int *b){ // parameter by reference
    int temp =*a;
    *a=*b;
    *b=temp;
}