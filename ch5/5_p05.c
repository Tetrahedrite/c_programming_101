#include <stdio.h>

int main() {
    double temp;
    char unit;

    printf("온도? ");
    scanf("%lf %c", &temp, &unit);

    if (unit == 'C')
        printf("%.2lf %c\n", temp * 9 / 5 + 32, 'F');
    else if (unit == 'F')
        printf("%.2lf %c\n", (temp - 32) * 5 / 9, 'C');
    else
        printf("단위가 잘못되었습니다.\n");
    
    return 0;
}
