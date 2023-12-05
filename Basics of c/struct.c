#include <stdio.h>


typedef struct
{
    int age;
    int grade;
}
person;

void main(void){
    person p;
    p.age = 12;
    p.grade = 4;
    printf("age %d\n",p.age);
    printf("grade %d", p.grade);

}