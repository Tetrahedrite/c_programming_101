#include <stdio.h>

#define RATE_FEE_TRANSFER 0.0175

int main() {
    int rate_basic, priority_percentage;
    double rate_final, usd_to_purchase, krw;

    printf("원/달러 매매기준율? ");
    scanf("%d", &rate_basic);

    printf("환율우대율(0~100%%)? ");
    scanf("%d", &priority_percentage);

    rate_final = rate_basic + (rate_basic * RATE_FEE_TRANSFER * (1 - priority_percentage / 100.0));
    printf("달러 살 때 환율은 %lf입니다.\n", rate_final);

    printf("구입할 달러(USD)? ");
    scanf("%lf", &usd_to_purchase);

    krw = usd_to_purchase * rate_final;
    printf("USD %.2lf 살 때 ==> KRW %.2lf\n", usd_to_purchase, krw);

    return 0;
}
