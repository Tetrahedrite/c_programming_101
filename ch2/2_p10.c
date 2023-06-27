#include <stdio.h>

int main() {
    int i;

    printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
    printf("정수? ");
    scanf("%i", &i);

    printf(" 8진수: %#o\n", i);
    printf("10진수: %d\n", i);
    printf("16진수: %#x\n", i);

    return 0;
}
