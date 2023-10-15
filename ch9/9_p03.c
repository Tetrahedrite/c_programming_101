#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

void inverse_string_case(char *str, unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char input[STR_SIZE];
    printf("문자열? ");
    fgets(input, STR_SIZE, stdin);

    inverse_string_case(input, strlen(input));

    printf("변환 후: ");
    printf("%s\n", input);

    return 0;
}