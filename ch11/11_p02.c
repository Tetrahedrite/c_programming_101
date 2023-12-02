#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

#define DIGIT_0_BASE '0'

size_t sum_of_digits(char *str) {
    size_t sum = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            sum += *str++ - DIGIT_0_BASE;
        }
    }
    return sum;
}

int main() {
    while (1) {
        char input[STR_SIZE];
        fputs("정수? ", stdout);
        scanf("%s", input);

        if (strcmp(input, "0") == 0)
            return 0;
        else
            printf("sum of digits: %zu\n", sum_of_digits(input));
    }

    return 0;
}
