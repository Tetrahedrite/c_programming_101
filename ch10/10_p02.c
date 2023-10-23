#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct tagLOGIN {
    char username[20];
    char password[20];
} LOGIN;

void make_lower(LOGIN *login) {
    for (int i = 0; i < strlen(login->username); i++) {
        login->username[i] = tolower(login->username[i]);
    }
    for (int i = 0; i < strlen(login->password); i++) {
        login->password[i] = tolower(login->password[i]);
    }
}

void print_login(const LOGIN *login) {
    printf("ID: %s\n", login->username);
    printf("PW: ");
    for (int i = 0; i < strlen(login->password); i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    LOGIN login;

    printf("ID? ");
    fgets(login.username, 20, stdin);
    login.username[strlen(login.username) - 1] = '\0';

    printf("Password? ");
    fgets(login.password, 20, stdin);
    login.password[strlen(login.password) - 1] = '\0';

    make_lower(&login);
    print_login(&login);
    return 0;
}
