#include<stdio.h>

int main () {
    int a, b, temp;
    a = 10;
    printf("Before swap a is %d\n", a);
    b = 20;
    printf("Before swap b is %d\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("Once we swap the values of the two vairables a : %d and b : %d\n", a, b);

}