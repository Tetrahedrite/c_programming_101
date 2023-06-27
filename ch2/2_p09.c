#include <stdio.h>

int main() {
    int i;

    printf("16진수 정수? ");
    scanf("%x", &i);

    printf("16진수 %x는 10진수로 %d입니다.\n", i, i);

    return 0;
}
