#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 1024

int main() {
    puts("바이너리 파일이 소트되어 있는지 확인하는 프로그램입니다.");
    
    char filename[STR_SIZE];
    fputs("파일 이름? ", stdout);
    fgets(filename, STR_SIZE, stdin);
    filename[strlen(filename) - 1] = '\0';

    // Read binary file
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        puts("파일 읽기 실패");
        return 1;
    }

    // Get file size
    fseek(fp, 0, SEEK_END);
    size_t filesizeInBytes = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    // Dymaically allocate memory for the file
    int *buffer = (int *)malloc(filesizeInBytes);
    fread(buffer, sizeof(int), filesizeInBytes / sizeof(int), fp);
    fclose(fp);

    // Check if the file is sorted
    for (size_t i = 0; i < filesizeInBytes / sizeof(int) - 1; i++) {
        if (buffer[i] > buffer[i + 1]) {
            puts("파일이 정렬되지 않습니다.");
            free(buffer);
            return 1;
        }
    }
    puts("파일이 정렬되었습니다.");
    free(buffer);
    
    return 0;
}
