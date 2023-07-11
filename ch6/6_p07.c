#include <stdio.h>

int is_prime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num, count = 0;

    printf("1~N사이의 소수를 구합니다. N은? ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) {
        if (!is_prime(i))
            continue;

        printf("%3d", i);
        count++;

        if (count % 15 == 0)
            printf("\n");
    }

    if (count % 15 != 0)
        printf("\n");

    printf("소수는 모두 %d개입니다.\n", count);

    return 0;
}
