#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char *name = "mintesnot";
    char *name_2 = "afework";
    printf("%s %s\n", name,name_2);
    printf("%d\n",strcmp(name,name_2));
    *name = toupper(*name);
    printf("%s %s\n", name,name_2);
    *name_2 = toupper(*name_2);
    printf("%s %s\n", name,name_2);
}