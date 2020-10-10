#include <stdio.h>

int main() {

    int A, B, a, b;

    // Taking two positive integers
    printf("Enter two positive integers: ");
    scanf("%d%d", &A, &B);

    a = A;
    b = B;

    // Iterate loop until a and b becomes equal
    while(a != b) {
        // If a is greater than b, subtract b from a
        if (a > b) {
            a = a - b;
        }
        // Else b is greater than a, subtract a from b
        else {
            b = b - a;
        }
    }

    // Output
    printf("\nGCD of %d and %d: %d\n", A, B, a);

    return 0;
}