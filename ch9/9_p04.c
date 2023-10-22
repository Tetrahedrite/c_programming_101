#include <stdio.h>
#include <string.h>

#define STR_SIZE 1024

void reverse_string(char *str) {
    const size_t pos_last = strlen(str) - 1; // Last index of the string
    for (int i = 0; i < pos_last / 2 + 1; i++) { // Iterate over half of the string
        // Swap character
        const char temp = str[i];
        str[i] = str[pos_last - i];
        str[pos_last - i] = temp;
    }
}

int main() {
    char str[STR_SIZE];

    printf("문자열? ");
    fgets(str, STR_SIZE, stdin);
    str[strlen(str) - 1] = '\0';

    reverse_string(str);
    printf("역순으로 된 문자열: %s\n", str);
    return 0;
}
