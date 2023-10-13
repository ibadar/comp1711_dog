# include <stdio.h>

/*int main() {
    int a = 5, i = 0;
    while (i<5) {
        printf("%d\n", i);
        i += 1;
    }

} */

int main() {
    int a = 0, x = 20;
    for (a = 1; a < 20; a++) {
        if ((a%2) != 0) {
            printf("%d\n", a);
        }
    }
}