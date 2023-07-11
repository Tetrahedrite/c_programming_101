#include <stdio.h>

#define CHAR_START 32
#define CHAR_END 127

int main() {
    for (int i = CHAR_START; i < CHAR_END; i++) {
        printf("%c ", i);
        if ((i - CHAR_START) % 24 == 23 && i != CHAR_END)
            printf("\n");
    }
    printf("\n");

    return 0;
}
