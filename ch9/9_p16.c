#include <stdio.h>
#include <string.h>

#define STR_SIZE 1024

#define ACCOUNT_COMPARE_SUCCESS 0
#define ACCOUNT_NOT_EXIST_ID 1
#define ACCOUNT_WRONG_PASSWORD 2

int login(const char *(*account_db)[2], int db_record_size, const char *username, const char *password) {
    int bad_password = 0;
    for (int i = 0; i < db_record_size; i++) {
        int match_id = (strcmp(account_db[i][0], username) == 0);
        int match_pw = (strcmp(account_db[i][1], password) == 0);
        if (match_id && match_pw)
            return ACCOUNT_COMPARE_SUCCESS;
        else if (match_id)
            return ACCOUNT_WRONG_PASSWORD;
    }
    return ACCOUNT_NOT_EXIST_ID;
}

int main() {
    const char *account_db[][2] = {
        { "parkjimin", "@BestOfMe@" },
        { "test", "123456" },
        { "programming", "helloworld" },
        { "holymoly", "halligalli" },
        { "user1234", "password!@" },
    };
    unsigned int fail_count = 0;

    while (1) {
        char id[STR_SIZE], pw[STR_SIZE];
        printf("ID: ");
        fgets(id, STR_SIZE, stdin);
        id[strlen(id) - 1] = '\0';

        printf("PW: ");
        fgets(pw, STR_SIZE, stdin);
        pw[strlen(pw) - 1] = '\0';

        switch (login(account_db, sizeof(account_db) / sizeof(account_db[0]), id, pw)) {
            case ACCOUNT_COMPARE_SUCCESS:
                puts("로그인 성공!");
                return 0;
            case ACCOUNT_NOT_EXIST_ID:
                puts("해당 id가 없습니다!");
                fail_count++;
                break;
            case ACCOUNT_WRONG_PASSWORD:
                puts("패스워드가 틀렸습니다.");
                fail_count++;
                break;
        }

        if (fail_count >= 3) {
            puts("로그인 실패!");
            return 1;
        }
    }
    return 0;
}
