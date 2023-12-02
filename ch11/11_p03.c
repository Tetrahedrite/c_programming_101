#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for (int i = 0; i <= 19; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
