#include <stdio.h>

int main() {
    double length;
    char unit;

    printf("넓이? ");
    scanf("%lf %c", &length, &unit);

    if (unit == 'm')
        printf("%.2lf 제곱미터 == %.2lf 평\n", length, length * 0.3025);
    else if (unit == 'p')
        printf("%.2lf 평 == %.2lf 제곱미터\n", length, length * 3.305785);
    else
        printf("단위가 잘못되었습니다.\n");

    return 0;
}
