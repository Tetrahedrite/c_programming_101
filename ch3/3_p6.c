#include <stdio.h>

#define PYEONG_PER_M2_AREA 0.3025

int main() {
    float area_m2, area_pyeong;
    printf("아파트의 면적(제곱미터)? ");
    scanf("%f", &area_m2);

    area_pyeong = area_m2 * PYEONG_PER_M2_AREA;
    printf("%.2f 제곱미터 = %.2f 평\n", area_m2, area_pyeong);

    return 0;
}
