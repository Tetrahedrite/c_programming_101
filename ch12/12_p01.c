#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 1024

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
    char line[BUF_SIZE];
    while (fgets(line, sizeof(line), fp))
        printf("%2d: %s", ++lines, line);

    fclose(fp);

    return 0;
}
