#include <stdio.h>

int main() {
    double usd, krw, rate_krw_per_usd;

    printf("USD? ");
    scanf("%lf", &usd);

    printf("원/달러 환율? ");
    scanf("%lf", &rate_krw_per_usd);

    krw = usd * rate_krw_per_usd;
    printf("USD %.2lf = KRW %.2lf\n", usd, krw);

    return 0;
}
