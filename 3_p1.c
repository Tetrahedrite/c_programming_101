#include <stdio.h>

int main() {
    int side;

    printf("한 변의 길이 ? ");
    scanf("%d", &side);

    printf("정사각형의 넓이: %d\n", side * side);
    printf("정사각형의 둘레: %d\n", side * 4);

    return 0;
}
