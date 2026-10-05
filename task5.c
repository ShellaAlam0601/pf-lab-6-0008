#include <stdio.h>

int main() {

    int n;
    int fact1 = 1, fact2 = 1, fact3 = 1;
    int catalan;

    printf("Enter n: ");
    scanf("%d", &n);

    // (2n)!
    for (int i = 1; i <= 2 * n; i++) {
        fact1 = fact1 * i;
    }

    // (n+1)!
    for (int i = 1; i <= n + 1; i++) {
        fact2 = fact2 * i;
    }

    // n!
    for (int i = 1; i <= n; i++) {
        fact3 = fact3 * i;
    }

    catalan = fact1 / (fact2 * fact3);

    printf("Catalan number = %d", catalan);

    return 0;
}