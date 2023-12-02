#include <stdio.h>

#define POWER_LIMIT 10

int power(int* power_lookup_table, int base, int n) {
    if (n == 0)
        return 1;

    if (power_lookup_table[n] != 0)
        return power_lookup_table[n];

    return base * power(power_lookup_table, base, n - 1);
}

int main() {
    int power_lookup_table[POWER_LIMIT] = { 1, };

    int base;
    fputs("밑(base)? ", stdout);
    scanf("%d", &base);

    for (int n = 0; n < POWER_LIMIT; n++) {
        power_lookup_table[n] = power(power_lookup_table, base, n);
        printf("%d ^ %d = %d\n", base, n, power_lookup_table[n]);
    }

    return 0;
}
