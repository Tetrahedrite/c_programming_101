#include <stdio.h>

#define YEAR_START 2000
#define YEAR_END (2100 - 1)

int is_leap_year(int year) {
    if (year % 4 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int count = 0;
    printf("%d~%d사이의 윤년\n", YEAR_START, YEAR_END + 1);

    for (int year = YEAR_START; year <= YEAR_END; year++) {
        if (!is_leap_year(year))
            continue;

        printf(" %4d", year);
        count++;
        if (count % 10 == 0)
            printf("\n");
    }

    if (count % 10 != 0)
        printf("\n");

    return 0;
}
