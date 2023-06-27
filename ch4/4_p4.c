#include <stdio.h>

int main() {
    double yongmae, yongjil, nongdo;

    printf("용매(g)? ");
    scanf("%lf", &yongmae);

    printf("용질(g)? ");
    scanf("%lf", &yongjil);

    nongdo = yongjil * 100 / (yongmae + yongjil);
    printf("농도: %.2lf %%\n", nongdo);

    return 0;
}
