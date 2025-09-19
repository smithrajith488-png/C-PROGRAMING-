#include <stdio.h>
int main() {
    int num, last_digit;
     printf("Enter a number: ");
    scanf("%d", &num);
    last_digit = num % 10;
    if (last_digit % 3 == 0) {
        printf("The last digit of %d is %d and is divisible by 3.\n", num, last_digit);
    } else {
        printf("The last digit of %d is %d and is not divisible by 3.\n", num, last_digit);
    }

    return 0;
}