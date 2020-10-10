#include <stdio.h>

int main() {

    int A, B, a, b;

    printf("Enter two non-negative integers: ");
    scanf("%d%d", &A, &B);

    a = A;
    b = B;

    while(a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    printf("\nGCD of %d and %d: %d\n", A, B, a);

    return 0;
}