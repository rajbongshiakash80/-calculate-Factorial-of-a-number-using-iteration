#include <stdio.h>

// Function to calculate factorial using iteration
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d using iteration is: %d\n", num, factorial_iterative(num));
    }

    return 0;
}
