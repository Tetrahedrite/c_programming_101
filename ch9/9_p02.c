#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

void remove_space(char *str) {
    unsigned int written = 0;
    for (unsigned int i = 0; i < strlen(str); i++) {
        if (!isspace(str[i]))
            str[written++] = str[i];
    }
    str[written] = '\0';
}

int main() {
    char str[STR_SIZE];

    printf("문자열? ");
    fgets(str, STR_SIZE, stdin);
    str[strlen(str) - 1] = '\0';

    remove_space(str);
    printf("공백 문자 제거 후: %s\n", str);
    return 0;
}
