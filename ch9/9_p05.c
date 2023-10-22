#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

int strcmp_ic(const char *str1, const char *str2) {
    while (*str1 || *str2) {
        const char c1 = tolower(*str1++), c2 = tolower(*str2++);
        if (c1 != c2) {
            return c1 - c2;
        }
    }
    return 0;
}

int main() {
    char str1[STR_SIZE], str2[STR_SIZE];
    
    printf("첫 번째 문자열? ");
    fgets(str1, STR_SIZE, stdin);
    str1[strlen(str1) - 1] = '\0';
    
    printf("두 번째 문자열? ");
    fgets(str2, STR_SIZE, stdin);
    str2[strlen(str2) - 1] = '\0';

    if (strcmp_ic(str1, str2) == 0) {
        printf("%s와 %s가 같습니다.\n", str1, str2);
        return 0;
    } else {
        printf("%s와 %s가 다릅니다.\n", str1, str2);
        return 1;
    }
}
