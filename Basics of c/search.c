#include <stdio.h>

const int LENGTH = 10;
int linear_search(int arr[], int value);
int binary_search(int arr[], int value);

void main(){
    int array[] = {2,323,12,54,22,62,7,5,8,9};
    int result = linear_search(array,10);
    int result_two = binary_search(array,10);
}

int linear_search(int arr[], int value){
    for (int i = 0;i<LENGTH;i++){
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int value){
    int middle;
    int top = 0;
    int bottom = LENGTH;
    do{
        middle = (top + bottom) /2;
        if(arr[middle] == value){
            return middle;
        }
        else if(arr[middle] > value){
            bottom = middle -1;
        }
        else{
            top = middle + 1;
        }
    }while (top <= bottom);
    return -1;
}