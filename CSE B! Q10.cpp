#include<stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    if (sum & 1) {
        printf("The sum of %d and %d is %d, which is odd.\n", num1, num2, sum);
    } else {
        printf("The sum of %d and %d is %d, which is even.\n", num1, num2, sum);
    }

    return 0;
}