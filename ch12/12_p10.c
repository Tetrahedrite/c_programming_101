#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

#define COUNT_OF_ALPHABET ('z' - 'a' + 1)

void decrypt(char *str, int key) {
    key %= COUNT_OF_ALPHABET;

    for (int i = 0; i < strlen(str); i++) {
        if (!isalpha(str[i]))
            continue;

        str[i] += key;

        if (key > 0 && !isalpha(str[i]))
            str[i] -= COUNT_OF_ALPHABET;
        else if (key < 0 && !isalpha(str[i]))
            str[i] += COUNT_OF_ALPHABET;
    }
}

int main() {
    char str[STR_SIZE];
    int key;

    printf("복호화할 파일? ");
    fgets(str, STR_SIZE, stdin);
    str[strlen(str) - 1] = '\0';

    printf("암호 키(정수)? ");
    scanf("%d", &key);
    while (getchar() != '\n');

    FILE *fp = fopen(str, "r");
    if (fp == NULL) {
        puts("파일 열기 실패");
        return 1;
    }
    fgets(str, STR_SIZE, fp);
    fclose(fp);
    decrypt(str, key);

    fputs(str, stdout);

    return 0;
}
