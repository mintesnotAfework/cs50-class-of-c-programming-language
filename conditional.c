#include <stdio.h>

void main(){
    printf("Enter the number you wnat to see : ");
    int number;
    scanf("%d",&number);
    if (number > 10){
        printf("the %d is greater than 10",number);
    }
    else if (number == 10){
        printf("The %d is equal to 10",number);
    }
    else{
        printf("THe %d is less than 10",number);
    }
    printf("\n");
}