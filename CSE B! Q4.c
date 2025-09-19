#include <stdio.h>
int main() {
    int num1, num2, difference;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    difference = num1 - num2;
    if (difference % 2 == 0) {
        printf("The difference between %d and %d is %d, which is an even number.\n", num1, num2, difference);
    } else {
        printf("The difference between %d and %d is %d, which is an odd number.\n", num1, num2, difference);
    }

    return 0;
}