#include <stdio.h>
#include <string.h>

int main() {
    char age;
    printf("What age are you: ");
    scanf("%c", &age);
    printf("Your age is %d\n", age);

    switch (age) {
        case (age < 15):
            printf("You are in highschool! ");
            break;
        case (age >= 19):
            printf("You are in uni! ");
            break;
        
    }
    return(0);
}