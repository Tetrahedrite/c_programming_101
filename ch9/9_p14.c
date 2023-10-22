#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

#define CONSTRAINT_ID_MIN_LENGTH 8

int main() {
    char str[STR_SIZE];

    while (1) {
        printf("ID? ");
        fgets(str, STR_SIZE, stdin);
        str[strlen(str) - 1] = '\0';

        if (strlen(str) < CONSTRAINT_ID_MIN_LENGTH) {
            printf("ID는 8자 이상이어야 합니다.\n");
            continue;
        }

        if (!isalpha(*str)) {
            printf("ID는 영문자로 시작해야 합니다.\n");
            continue;
        }

        printf("%s는 ID로 사용할 수 있습니다.\n", str);
        break;
    }
    return 0;
}
