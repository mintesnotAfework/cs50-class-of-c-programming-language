#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int value;
    struct node *next;
}node;

void addFirst(node *list, int x);
void addLast(node *list,int x);
void removeFirst(node *list);
void removeLast(node *list);
int search(node *list, int x);
int getValue(node *list,int index);
void clear(node *list);
int isEmpty(node *list);
int size(node *list);
void insert(node *list,int index,int x);
void delete(node *list,int index);



int main(void){
    node *start = NULL;
    for (int i = 0;i < 10;i++){
        addFirst(start, 300 - i * 10);
        addLast(start,10 * i);
    }
    removeFirst(start);
    removeLast(start);
    clear(start);
    return 0;
}

void addFirst( node *list,int x){
    node *a = malloc(sizeof(node));
    a->value = x;
    a->next = NULL;
    if (list == NULL){
        list = a;
    }
    a->next = list;
    list = a;
}
void addLast(node *list,int x){
    node *a = malloc(sizeof(node));
    a->value = x;
    a->next = NULL;
    if (list == NULL){
        list = a;
    }
    node *i = list;
    while(i->next != NULL){
        i = i ->next;
    }
    i -> next = a;
}
void removeFirst(node *list){
    if ( list == NULL){
        return;
    }
    else if( list->next == NULL){
        free(list);
        return;
    }
    node *temp = list;
    list = list->next;
    temp ->next = NULL;
    free(temp);
}
void removeLast(node *list){
    if ( list == NULL){
        return;
    }
    else if( list->next == NULL){
        free(list);
        return;
    }
    node *i = list;
    while(i->next ->next != NULL){
        i = i ->next;
    }
    node *temp = i->next;
    i->next = NULL;
    free(temp);
}
int search(node *list, int x){
    if ( list == NULL){
        return;
    }
    int index = 0;
    for ( node *i = list;i != NULL;i = i->next,index++){
        if ( i->value ==x){
            return index;
        }
    }
    return -1;
}
int getValue(node *list,int index){
    if ( list == NULL){
        return;
    }
    int index_1 = 0;
    for ( node *i = list;i != NULL;i = i->next,index_1++){
        if ( index_1 == index){
            return i->value;
        }
    }
    return -1;
}

void clear(node *list){
    for ( node *i = list;i != NULL;){
        node *temp = i;
        i = i->next;
        temp->next = NULL;
        free(temp);
    }
    list = NULL;
}
int isEmpty(node *list){
    return list->next == NULL;
}
int size(node *list){
    int size= 0;
    for ( node *i = list;i != NULL;i = i->next){
        size++;
    }
    return size;
}
void insert(node *list,int index,int x){ 
    node *a = malloc(sizeof(node));
    a->value = x;
    a->next = NULL;
    if (list == NULL){
        list = a;
    }
    node *i = list;
    int j = 0;
    while(i->next != NULL){
        if(j == index){
            node *temp = i->next;
            i->next = a;
            a ->next = temp;
            return;
        }
        i = i ->next;
        j++;
    }
}
void delete(node *list,int index){ 
    if (list == NULL){
        return;
    }
    else if(list -> next == NULL){
        if(index == 0){
            node * t =list;
            list = NULL;
            free(t);
        }
        return;
    }
    node *k = NULL;
    node *i = list;
    int j = 0;
    while(i->next != NULL){
        if(j == index){
            k->next = i->next;
            i->next =NULL;
            free(i);
            return;
        }
        k =i;
        i = i ->next;
        j++;
    }
}


