#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define STR_SIZE 1024

#define EXTENSION_TEXT ".txt"
#define EXTENSION_BINARY ".dat"

int main() {
    srand(time(NULL));

    int n;
    fputs("정수의 개수? ", stdout);
    scanf("%d", &n);
    while (getchar() != '\n');

    int *numbers = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 100;
    }

    char filename[STR_SIZE];
    fputs("파일명? ", stdout);
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename) - 1] = '\0';

    // Write text file
    char filenameText[STR_SIZE];
    strcpy(filenameText, filename);
    strcat(filenameText, EXTENSION_TEXT);
    FILE *fpText = fopen(filenameText, "w");
    if (fpText == NULL) {
        puts("파일 열기 실패\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fpText, "%d\n", numbers[i]);
    }
    fclose(fpText);

    // Write binary file
    char filenameBinary[STR_SIZE];
    strcpy(filenameBinary, filename);
    strcat(filenameBinary, EXTENSION_BINARY);
    FILE *fpBinary = fopen(filenameBinary, "wb");
    if (fpBinary == NULL) {
        puts("파일 열기 실패\n");
        fclose(fpText);
        return 1;
    }
    fwrite(numbers, sizeof(int), n, fpBinary);
    fclose(fpBinary);

    printf("%s와 %s를 생성했습니다.\n", filenameText, filenameBinary);

    return 0;
}
