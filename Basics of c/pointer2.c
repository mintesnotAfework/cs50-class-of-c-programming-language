#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main(void){
    string name = get_string("s: ");
    string name_2 = get_string("s: ");
    printf("%s %s\n", name,name_2);
    printf("%d\n",strcmp(name,name_2));
    name[0] = toupper(name[0]);
    printf("%s %s\n", name,name_2);
    name_2[0] = toupper(name_2[0]);
    printf("%s %s\n", name,name_2);
}