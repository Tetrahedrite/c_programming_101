#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUF_SIZE 1024
#define LOGIN_DATA_SIZE 10
#define FILENAME "password.txt"
#define EXIT_COMMAND "."

typedef struct tagLOGIN {
    char username[BUF_SIZE];
    char password[BUF_SIZE];
} LOGIN;

int does_username_exist(const LOGIN *login, const char *username) {
    for (int i = 0; i < LOGIN_DATA_SIZE; i++) {
        if (strcmp(login[i].username, username) == 0)
            return 1;
    }

    return 0;
}

int is_valid_login(const LOGIN *login, const char *username, const char *password) {
    for (int i = 0; i < LOGIN_DATA_SIZE; i++) {
        if (strcmp(login[i].username, username) == 0
            && strcmp(login[i].password, password) == 0)
            return 1;
    }

    return 0;
}

int main() {
    LOGIN login[LOGIN_DATA_SIZE] = { 0, };
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (int i = 0; i < sizeof(login) / sizeof(login[0]); i++) {
        if (fscanf(fp, "%s %s", login[i].username, login[i].password) < 2)
            break;
    }

    while (1) {
        char id[BUF_SIZE], pw[BUF_SIZE];
        printf("ID? ");
        fgets(id, sizeof(id), stdin);
        id[strlen(id) - 1] = '\0';

        if (strcmp(id, EXIT_COMMAND) == 0) {
            break;
        } else if (!does_username_exist(login, id)) {
            puts("아이디를 찾을 수 없습니다.");
            continue;
        }

        printf("Password? ");
        fgets(pw, sizeof(pw), stdin);
        pw[strlen(pw) - 1] = '\0';

        if (is_valid_login(login, id, pw))
            puts("로그인 성공");
        else
            puts("비밀번호가 일치하지 않습니다.");
    }
    fclose(fp);

    return 0;
}
