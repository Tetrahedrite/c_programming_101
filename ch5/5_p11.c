#include <stdio.h>

int main() {
    for (int shifted = 0; shifted < 32; shifted++) {
        printf("%2d번 비트만 1인 값: %08X %d\n", shifted, 1 << shifted, 1 << shifted);
    }

    return 0;
}
