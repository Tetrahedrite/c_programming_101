#include <stdio.h>

#define SHIFTED(x) (1 << (x))
#define PRINT_SHIFTED(x) do { \
    printf("%d번 비트만 1인 값: %08X %d\n", (x), SHIFTED(x), SHIFTED(x)); \
} while(0);

int main() {
    PRINT_SHIFTED(7);
    PRINT_SHIFTED(15);
    PRINT_SHIFTED(23);
    PRINT_SHIFTED(31);

    return 0;
}
