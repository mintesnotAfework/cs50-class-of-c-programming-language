#include<stdio.h>

int main(void){
    int n = 30;
    printf("%p\n", &n);
    int nums[] = {1,2,3,4,5,6,7};
    for (int i = 0;i< 7;i++){
        printf("%p\n", &nums[i]);
    }
}