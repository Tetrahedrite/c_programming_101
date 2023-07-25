#include <stdio.h>

int main() {
    int salary, work_hour, work_days_in_month, tax_type, result;

    printf("시간당 급여? ");
    scanf("%d", &salary);

    printf("일일 근무 시간? ");
    scanf("%d", &work_hour);

    printf("한달 근무 일수? ");
    scanf("%d", &work_days_in_month);

    printf("세금 적용 여부 - 0: 미적용, 1:4대보험공제(8.41%%), 2:소득세공제(3.3%%)? ");
    scanf("%d", &tax_type);

    result = salary * work_hour * work_days_in_month;

    switch (tax_type) {
        case 0:
            break;
        case 1:
            result *= 1 - 0.0841;
            break;
        case 2:
            result *= 1 - 0.033;
            break;
        default:
            printf("잘못 입력하셨습니다.\n");
            break;
    }

    if (0 <= tax_type && tax_type <= 2)
        printf("예상 월급여: %d원\n", result);
    else
        return 1;

    return 0;
}
