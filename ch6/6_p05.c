#include <stdio.h>

int is_even(int i) {
    return i % 2 == 0;
}

int is_odd(int i) {
    return i % 2 == 1;
}

int main() {
    int input, count_even = 0, count_odd = 0;
    printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

    while (1) {
        scanf("%d", &input);

        if (input == 0)
            break;

        if (is_even(input))
            count_even++;

        if (is_odd(input))
            count_odd++;
    }

    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", count_even, count_odd);

    return 0;
}
