#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

#define EXIT_COMMAND "."

void encrypt(char *str, int key) {
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i]))
            str[i] += key;
    }
}

int main() {
    char str[STR_SIZE];
    int key;

    while (1) {
        printf("문자열? ");
        fgets(str, STR_SIZE, stdin);
        str[strlen(str) - 1] = '\0';
        if (strcmp(str, EXIT_COMMAND) == 0)
            break;

        printf("암호 키(정수)? ");
        scanf("%d", &key);
        while (getchar() != '\n');

        encrypt(str, key);
        printf("암호화된 문자열: %s\n", str);
    }
}
