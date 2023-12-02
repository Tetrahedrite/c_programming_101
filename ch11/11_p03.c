#include <stdio.h>

#define MAX_FIBONACCI_LIMIT 45

int fibonacci(int n) {
    if (n <= 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for (int i = 0; i < MAX_FIBONACCI_LIMIT; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
