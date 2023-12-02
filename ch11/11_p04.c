#include <stdio.h>

#define MAX_FIBONACCI_TABLE_SIZE 45

int fibonacci(int *fibonacci_lookup_table, int n) {
    if (n <= 1) {
        return 1;
    }

    if (fibonacci_lookup_table[n] != 0) {
        return fibonacci_lookup_table[n];
    } else {
        return fibonacci(fibonacci_lookup_table, n - 1) + fibonacci(fibonacci_lookup_table, n - 2);
    }
}

int main() {
    int fibonacci_lookup_table[MAX_FIBONACCI_TABLE_SIZE] = { 0, };
    for (int i = 0; i < MAX_FIBONACCI_TABLE_SIZE; i++) {
        int fib = fibonacci(fibonacci_lookup_table, i);
        fibonacci_lookup_table[i] = fib;
        printf("%d ", fib);
    }
    printf("\n");

    return 0;
}
