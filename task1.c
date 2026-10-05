#include <stdio.h>

int main() {

    int pin, digit, sum = 0;

    printf("Enter 4-digit PIN: ");
    scanf("%d", &pin);

    while (pin != 0) {

        digit = pin % 10;
        sum = sum + digit;
        pin = pin / 10;
    }

    if (sum > 10) {
        printf("Strong PIN");
    }
    else {
        printf("Weak PIN");
    }

    return 0;
}