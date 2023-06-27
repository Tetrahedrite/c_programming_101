#include <stdio.h>

int main() {
    float mass;

    printf("몸무게? ");
    scanf("%f", &mass);

    printf("입력한 몸무게는 %.2fKG입니다.\n", mass);

    return 0;
}
