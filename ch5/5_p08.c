#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("비트 연산식? ");
    scanf("%i %c %i", &num1, &op, &num2);

    switch (op) {
        case '&':
            result = num1 & num2;
            break;
        case '|':
            result = num1 + num2;
            break;
        case '^':
            result = num1 ^ num2;
            break;
        default:
            printf("올바른 비트 연산자가 아닙니다.\n");
            return 1;
    }

    printf("%X %c %X = %X\n", num1, op, num2, result);

    return 0;
}
