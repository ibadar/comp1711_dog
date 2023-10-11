#include<stdio.h>

int main () {
    int r;
    float pi, area;
    printf("Enter the radius of the circle O: ");
    scanf("%d", &r);
    pi = 3.14159;
    area = (pi * (r*r));
    printf("The area of the circle is :%f", area);
}