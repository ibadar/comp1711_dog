# include <stdio.h>
# include <string.h>

int main () {

    /* int a = 10, i, count;
    int array[];

    for (count = 0; count < 10; count++) {
        printf("%d\n", count);
        array[count] = (10*count);
        printf("%d\n", array[count]);
    }
    */
    int i = 0;

    char hello[] = "Hello";
    for (i = (strlen(hello) + 1); i >= 0; i--) {
        printf("%c\n", hello[i]);
    }


    return(0);
}