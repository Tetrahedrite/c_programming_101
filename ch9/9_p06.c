#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

#define EXIT_COMMAND "."

int check_time_str(char *time_str) {
    if (strlen(time_str) != 6) // String must be 6 characters long
        return 0;

    for (int i = 0; i < 6; i++) { // All characters must be digits
        if (!isdigit(time_str[i]))
            return 0;
    }

    for (int i = 0; i < 6; i += 2) {
        const char temp = time_str[i + 2];
        time_str[i + 2] = '\0';
        switch (i) {
            case 0: // hh must be between 00 and 23
                if (atoi(time_str + i) > 23)
                    return 0;
                break;
            case 2: // mm must be between 00 and 59
                if (atoi(time_str + i) > 59)
                    return 0;
                break;
            case 4: // ss must be between 00 and 59
                if (atoi(time_str + i) > 59)
                    return 0;
                break;
        }
        time_str[i + 2] = temp;
    }

    return 1;
}

int main() {
    char str[STR_SIZE];

    while (1) {
        printf("시간(.입력 시 종료)? ");
        fgets(str, STR_SIZE, stdin);
        str[strlen(str) - 1] = '\0';

        if (strcmp(str, EXIT_COMMAND) == 0)
            break;
        
        if (check_time_str(str))
            printf("%s는 유효한 시간입니다.\n", str);
        else
            printf("잘못 입력했습니다. hhmmss형식으로 입력하세오.\n");
    }

    return 0;
}