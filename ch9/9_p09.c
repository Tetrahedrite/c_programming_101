#include <stdio.h>
#include <string.h>

#define STR_SIZE 1024

int main() {
    char filename[STR_SIZE], extension[STR_SIZE];

    printf("파일명? ");
    fgets(filename, STR_SIZE, stdin);
    filename[strlen(filename) - 1] = '\0';

    printf("확장자? ");
    fgets(extension, STR_SIZE, stdin);
    extension[strlen(extension) - 1] = '\0';

    strcat(filename, ".");
    strcat(filename, extension);
    printf("전체 파일명: %s\n", filename);

    return 0;
}
