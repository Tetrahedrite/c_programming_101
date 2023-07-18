#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SCALE_COMMON 100

int graph(int num, unsigned int scale) {
    for (int i = 0; i < (num / scale); i++) {
        printf("*");
    }
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        int num = rand() % 10000;
        printf("%d:", num);
        graph(num, SCALE_COMMON);
        printf("\n");
    }

    return 0;
}
