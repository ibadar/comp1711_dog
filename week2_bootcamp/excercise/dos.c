#include<stdio.h>

int main () {
    int a, b, output;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    output = (a + b);
    printf("The sum is %d", output);
}