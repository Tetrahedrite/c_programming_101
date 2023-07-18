#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int num) {
    int count = 2; // Always have 2 numbers (1 and self)

    printf("%d ", 1); // 1

    for (int i = 2; i < num; i++) {
        if (num % i != 0)
            continue;

        printf("%d ", i);
        count++;
    }

    printf("%d ", num); // self

    printf("=> 총 %d개\n", count);
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        int num = rand() % 1000;

        printf("%d의 약수: ", num);
        divisors(num);
    }
    return 0;
}
