#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUF_SIZE 1024

#define COUNT_OF_ALPHABET ('z' - 'a' + 1)

int main() {
    char filename[BUF_SIZE];
    printf("파일명? ");
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename) - 1] = '\0';

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("존재하지 않는 파일입니다.\n");
        return 1;
    }

    int lines = 0;
    char c;
    int alphabet_table[COUNT_OF_ALPHABET] = { 0, };
    while ((c = fgetc(fp)) != EOF) {
        alphabet_table[tolower(c) - 'a']++;
        fputc(c, stdout);
    }

    for (int i = 0; i < COUNT_OF_ALPHABET; i++) {
        if (alphabet_table[i] > 0) {
            printf("%c: %-3d ", i + 'a', alphabet_table[i]);
        }
    }

    fclose(fp);

    return 0;
}
