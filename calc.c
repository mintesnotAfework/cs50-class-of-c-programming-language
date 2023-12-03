#include <stdio.h>

int add(int number1, int number2);
int sub(int number1, int number2);
int mul(int number1, int number2);
int div(int number1, int number2);
int reminder(int number1, int number2);

int main(void){
    printf("Enter a value i order like this operand opertor operand : ");
    int number1,number2;
    char operator;
    scanf("%d %c %d",&number1,&operator,&number2);
    // scanf("%c",number1);
    // scanf("%d",number1);
    printf("The following result for the given inputs %d %c %d is ",number1,operator,number2);
    switch (operator){
        case '+':
            printf("%d",add(number1,number2));
            break;
        case '-':
            printf("%d",sub(number1,number2));
            break;
        case '*':
            printf("%d",mul(number1,number2));
            break;
        case '/':
            printf("%d",div(number1,number2));
            break;
        case '%':
            printf("%d",reminder(number1,number2));
            break;
        default:
            printf("Invalid value");
    }    
    printf("\n");
}
int add(int number1, int number2)
{
    return number1 + number2;
}
int sub(int number1, int number2)
{
    return number1 - number2;
}
int mul(int number1, int number2)
{
    return number1 * number2;
}
int div(int number1, int number2)
{
    return number1 / number2;
}
int reminder(int number1, int number2)
{
    return number1 % number2;
}
