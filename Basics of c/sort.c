#include <stdio.h>

const int LENGTH = 10;
void bubble_sort(int array[]);
void selection_sort(int array[]);
void inserstion_sort(int array[]);

void main(){
    return;
}

void bubble_sort(int array[]){
    for (int i = 0;i < LENGTH - 1;i++){
        for(int j = i;j < LENGTH;j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void selection_sort(int array[]){
    int min;
    for (int i = 0;i < LENGTH - 1;i++){
        int min = i;
        for(int j = i + 1;j < LENGTH;j++){
            if(array[min] > array[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = array[i];
                array[i] = array[min];
                array[min] = temp;
        }
    }
}

void inserstion_sort(int array[]){
    int min;
    for (int i = 0;i < LENGTH - 1;i++){
        for (int j = i;i >= 0;j--){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j+1] = array[j];
                array[j] = temp;
            }
            else{
                break;
            }
        }
    }
}