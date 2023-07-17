#include <stdio.h>
#include <stdlib.h>

double calculator(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                printf("0으로 나눌 수 없습니다.\n");
                exit(1);
            }
            return num1 / num2;
        default:
            printf("알 수 없는 연산자\n");
            exit(1);
    }
}

int main() {
    double num1, num2;
    char op;

    while (1) {
        printf("수식 (0 0 0 입력 시 종료)? ");
        scanf("%lf %c %lf", &num1, &op, &num2);

        if (num1 == 0.0 && num2 == 0.0 && op == '0')
            break;

        const double result = calculator(num1, num2, op);
        printf("%lf\n", result);
    }

    return 0;
}
