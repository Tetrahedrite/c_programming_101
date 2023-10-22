#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

int main() {
    char str[STR_SIZE];
    unsigned int count_of_space = 0;

    printf("문자열? ");
    fgets(str, STR_SIZE, stdin);
    str[strlen(str) - 1] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            count_of_space++;
        }
    }

    printf("공백 문자의 개수: %u\n", count_of_space);
    return 0;
}
