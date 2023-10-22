#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 1024

#define DIRECTION_RIGHT 0
#define DIRECTION_LEFT 1

void rotate_string_once(char *str, int direction) {
    const size_t len = strlen(str);
    char temp;
    if (direction == DIRECTION_RIGHT) {
        temp = str[len - 1];
        for (int i = len - 1; i > 0; i--) {
            str[i] = str[i - 1];
        }
        str[0] = temp;
    } else {
        temp = str[0];
        for (int i = 0; i < len - 1; i++) {
            str[i] = str[i + 1];
        }
        str[len - 1] = temp;
    }
}

void rotate_string(char *str, int rotation_count) {
    for (int i = 0; i < abs(rotation_count); i++)
        rotate_string_once(str, rotation_count > 0 ? DIRECTION_RIGHT : DIRECTION_LEFT);
}

int main() {
    char str[STR_SIZE];
    int rotation_count = 0;

    printf("문자열? ");
    fgets(str, STR_SIZE, stdin);
    str[strlen(str) - 1] = '\0';

    while (1) {
        printf("이동할 글자 수? ");
        scanf("%d", &rotation_count);
        while (getchar() != '\n');

        if (rotation_count == 0)
            break;
        
        rotate_string(str, rotation_count);

        printf("%s\n", str);
    }
    return 0;
}
