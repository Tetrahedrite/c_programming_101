#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

#define PHONE_STR_PREFIX "010"
#define EXIT_COMMAND "."

int check_phone_str(char *str) {
    if (strncmp(str, PHONE_STR_PREFIX, 3) == 0 && strlen(str) == 11) {
        for (int i = sizeof(PHONE_STR_PREFIX) - 1; i < strlen(str); i++) {
            if (!isdigit(str[i]))
                return 0;
        }
        return 1;
    }
    return 0;
}

int main() {
    char str[STR_SIZE];

    while (1) {
        printf("전화번호(.입력 시 종료)? ");
        scanf("%s", str);
        if (strcmp(str, EXIT_COMMAND) == 0)
            break;

        if (check_phone_str(str)) {
            printf("%s는 유효한 전화번호입니다.\n", str);
        } else {
            printf("잘못 입력했습니다. 01012345678 형식으로 입력하세요.\n");
        }
    }
}
