#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_START 0
#define RANDOM_END 99

// random() already exists in `stdlib.h`
int _random() {
    return RANDOM_START + rand() % (RANDOM_END - RANDOM_START + 1);
}

int main() {
    int sum = 0;

    srand(time(NULL));

    printf("0~99사이의 임의의 정수를 10개 생성해서 합계를 구합니다.\n");

    for (int i = 10; i > 0; i--) {
        printf(" %3d", _random());
        sum += _random();
    }

    printf("\n합계: %d\n", sum);
    return 0;
}
