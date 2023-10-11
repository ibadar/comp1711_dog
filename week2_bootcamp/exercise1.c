#include<stdio.h>

int main () {
    float height;
    printf("Enter the height of Rectangle: ");
    scanf("%f", &height);
    float length;
    printf("Enter the length of Rectangle: ");
    scanf("%f", &length);
    float area;

    area = (length * height);
    printf("%f\n", area);
}