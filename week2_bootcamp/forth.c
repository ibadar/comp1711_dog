#include<stdio.h>

int main () {
    char name [10]; //tell the machine of how many characters there may be
    printf("Insert a name: ");
    scanf("%s", name);
    printf("Hello,  %s\n", name);
    return 0;
}