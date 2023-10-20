#include <stdio.h>

int test(int num1, int num2) {
    int final;
    final = (num1 * num2);
    printf("The final answer is %d\n", final);
    return (final);

}

int main() {
    int a, b;
    printf("Enter two numbers to Multiply: \n");
    scanf("%d" "%d", &a, &b);
    test(a, b);
    return(0);
}