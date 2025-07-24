#include <stdio.h>

void add(int *num1, int *num2, int *sum) {
    *sum = *num1 + *num2;
}

int main() {
    int a, b, result;
    int *p1 = &a;
    int *p2 = &b;
    int *pResult = &result;

    // Input values
    printf("Enter the first number: ");
    scanf("%d", p1);
    printf("Enter the second number: ");
    scanf("%d", p2);

    // Calculate sum
    add(p1, p2, pResult);

    // Output the result
    printf("The sum of %d and %d is %d\n", *p1, *p2, *pResult);

    return 0;
}