#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUF_SIZE 1024
#define LOGIN_DATA_SIZE 20
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

void register_user(LOGIN *login, int *login_count, const char *username) {
    if (*login_count >= LOGIN_DATA_SIZE) {
        printf("유저는 최대 %d명까지 등록할 수 있습니다.\n", LOGIN_DATA_SIZE);
        return;
    }

    char password[BUF_SIZE], password_confirmation[BUF_SIZE];
    printf("PW? ");
    fgets(password, BUF_SIZE, stdin);
    password[strlen(password) - 1] = '\0';

    printf("PW again? ");
    fgets(password_confirmation, BUF_SIZE, stdin);
    password_confirmation[strlen(password_confirmation) - 1] = '\0';

    if (strcmp(password, password_confirmation) == 0) {
        strcpy(login[*login_count].username, username);
        strcpy(login[*login_count].password, password);
        *login_count += 1;
        puts("ID and PW registered successfully.");
    } else {
        puts("Passwords doesn't match.");
    }
}

int save_login_data(FILE *fp, const LOGIN *login) {
    for (int i = 0; i < LOGIN_DATA_SIZE; i++) {
        if (strlen(login[i].username) > 0 && strlen(login[i].password) > 0)
            fprintf(fp, "%s %s\n", login[i].username, login[i].password);
        else
            break;
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

    int login_count;
    for (login_count = 0; login_count < sizeof(login) / sizeof(login[0]); login_count++) {
        if (fscanf(fp, "%s %s", login[login_count].username, login[login_count].password) < 2)
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
            fputs("아이디를 찾을 수 없습니다. 등록하시겠습니까(y/n)? ", stdout);
            if (getchar() == 'y') {
                while (getchar() != '\n');
                register_user(login, &login_count, id);
            } else {
                while (getchar() != '\n');
            }
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

    if (freopen(NULL, "w", fp) == NULL) {
        puts("파일을 저장할 수 없습니다.");
        return 1;
    }

    save_login_data(fp, login);
    fclose(fp);
    return 0;
}
