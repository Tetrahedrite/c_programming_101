#include <stdio.h>

int main() {
    int krw;
    double usd, rate_krw_per_usd;

    printf("KRW? ");
    scanf("%d", &krw);

    printf("원/달러 환율? ");
    scanf("%lf", &rate_krw_per_usd);

    usd = krw / rate_krw_per_usd;
    printf("KRW %d = USD %.2lf\n", krw, usd);
}
