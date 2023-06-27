#include <stdio.h>

int main() {
    printf("7번 비트만 1인 값: %08X %d\n", 1 << 7, 1 << 7);
    printf("15번 비트만 1인 값: %08X %d\n", 1 << 15, 1 << 15);
    printf("23번 비트만 1인 값: %08X %d\n", 1 << 23, 1 << 23);
    printf("31번 비트만 1인 값: %08X %d\n", 1 << 31, 1 << 31);

    return 0;
}
