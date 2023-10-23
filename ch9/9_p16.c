#include <stdio.h>
#include <string.h>

#define STR_SIZE 1024

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

        int bad_password = 0;
        for (int i = 0; i < sizeof(account_db) / sizeof(account_db[0]); i++) {
            int match_id = (strcmp(account_db[i][0], id) == 0);
            int match_pw = (strcmp(account_db[i][1], pw) == 0);
            if (match_id && match_pw) {
                puts("로그인 성공!");
                return 0;
            } else if (match_id && !match_pw) {
                bad_password = 1;
                break;
            }
        }
        
        if (bad_password) {
            puts("패스워드가 틀렸습니다.");
            fail_count++;
        } else {
            puts("해당 id가 없습니다!");
            fail_count++;
        }

        if (fail_count >= 3) {
            puts("로그인 실패!");
            return 1;
        }
    }
    return 0;
}
