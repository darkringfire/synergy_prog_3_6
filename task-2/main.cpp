#include <iostream>

int main() {
    int n = 7;
    int x;
    do {
        printf("Enter x (%i to exit):", n);
        scanf("%i", &x);
        if (x == n) {
            printf("x equal %i. Exit\n", n);
        } else {
            if (x > n) {
                printf("%i greater than %i\n", x, n);
            } else {
                printf("%i less than %i\n", x, n);
            }

            if (x > 10) {
                printf("%i greater than %i\n", x, 10);
            } else if (x < 10) {
                printf("%i less than %i\n", x, 10);
            } else {
                printf("x equal %i\n", 10);
            }

            if (x % 2 == 0) {
                printf("%i is multiple of %i\n", x, 2);
            } else {
                printf("%i is not multiple of %i\n", x, 2);
            }

            if (x % 3 == 0) {
                printf("%i is multiple of %i\n", x, 3);
            } else {
                printf("%i is not multiple of %i\n", x, 3);
            }
        }

        printf("\n");
    } while (x != n);
    return 0;
}
