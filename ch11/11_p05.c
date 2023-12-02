#include <stdio.h>

int power(int base, int n) {
    if (n == 0)
        return 1;

    return base * power(base, n - 1);
}

int main() {
    int base;
    fputs("밑(base)? ", stdout);
    scanf("%d", &base);

    for (int n = 0; n < 10; n++)
        printf("%d ^ %d = %d\n", base, n, power(base, n));

    return 0;
}
