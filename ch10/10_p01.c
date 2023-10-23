#include <stdio.h>
#include <string.h>

typedef struct tagLOGIN {
    char username[20];
    char password[20];
} LOGIN;

int main() {
    LOGIN login;

    printf("ID? ");
    scanf("%s", login.username);
    
    printf("Password? ");
    scanf("%s", login.password);

    printf("ID: %s\n", login.username);
    printf("PW: ");
    for (int i = 0; i < strlen(login.password); i++) {
        printf("*");
    }
    printf("\n");
    return 0;
}
