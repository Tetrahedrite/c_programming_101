#include <stdio.h>
#include <string.h>

#define EXIT_COMMAND "."

typedef struct tagLOGIN {
    char username[20];
    char password[20];
} LOGIN;

int main() {
    LOGIN input, login[5] = {
        { "guest", "idontknow" },
        { "guest1", "idontknow" },
        { "guest2", "idontknow" },
        { "guest3", "idontknow" },
        { "guest4", "idontknow" },
    };

    while (1) {
        printf("ID? ");
        fgets(input.username, sizeof(input.username), stdin);
        input.username[strlen(input.username) - 1] = '\0';

        if (strcmp(input.username, EXIT_COMMAND) == 0)
            break;

        printf("PW: ");
        fgets(input.password, sizeof(input.password), stdin);
        input.password[strlen(input.password) - 1] = '\0';

        int found = 0;
        for (int i = 0; i < sizeof(login) / sizeof(login[0]); i++) {
            if (strcmp(input.username, login[i].username) == 0
                && strcmp(input.password, login[i].password) == 0) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("로그인 성공\n");
        else
            printf("로그인 실패\n");
    }

    return 0;
}
