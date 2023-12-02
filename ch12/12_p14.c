#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 1024

int compare_int(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

// Load two binary files from input, that contains number of int values.
// Then merge them into one big array.
// Rewrite the result into another file with qsorted.
int main() {
    FILE *fpSource1, *fpSource2, *fpTarget;
    char filenameSource1[STR_SIZE], filenameSource2[STR_SIZE], filenameTarget[STR_SIZE];
    size_t sizeSource1, sizeSource2, sizeTarget;

    fputs("첫 번째 파일명? ", stdout);
    fgets(filenameSource1, STR_SIZE, stdin);
    filenameSource1[strlen(filenameSource1) - 1] = '\0';

    // Load the first file
    fpSource1 = fopen(filenameSource1, "rb");
    if (fpSource1 == NULL) {
        puts("파일 열기 실패\n");
        return 1;
    }

    // Get file size
    fseek(fpSource1, 0, SEEK_END);
    sizeSource1 = ftell(fpSource1) / sizeof(int);
    fseek(fpSource1, 0, SEEK_SET);
    int *arrSource1 = (int *) malloc(sizeSource1 * sizeof(int));
    if (arrSource1 == NULL) {
        puts("메모리 할당 실패\n");
        fclose(fpSource1);
        return 1;
    } else {
        printf("정수 %zu개를 읽었습니다.\n", sizeSource1);
    }
    fread(arrSource1, sizeof(int), sizeSource1, fpSource1);
    fclose(fpSource1);

    fputs("두 번째 파일명? ", stdout);
    fgets(filenameSource2, STR_SIZE, stdin);
    filenameSource2[strlen(filenameSource2) - 1] = '\0';

    // Load the second file
    fpSource2 = fopen(filenameSource2, "rb");
    if (fpSource2 == NULL) {
        puts("파일 열기 실패\n");
        return 1;
    }

    // Get file size
    fseek(fpSource2, 0, SEEK_END);
    sizeSource2 = ftell(fpSource2) / sizeof(int);
    fseek(fpSource2, 0, SEEK_SET);
    int *arrSource2 = (int *) malloc(sizeSource2 * sizeof(int));
    if (arrSource2 == NULL) {
        puts("메모리 할당 실패\n");
        free(arrSource1);
        fclose(fpSource2);
        return 1;
    } else {
        printf("정수 %zu개를 읽었습니다.\n", sizeSource2);
    }
    fread(arrSource2, sizeof(int), sizeSource2, fpSource2);
    fclose(fpSource2);

    // Merge the two arrays
    sizeTarget = sizeSource1 + sizeSource2;
    int *arrTarget = (int *) malloc(sizeTarget * sizeof(int));
    if (arrTarget == NULL) {
        puts("메모리 할당 실패\n");
        free(arrSource1);
        free(arrSource2);
        return 1;
    }
    
    int i = 0;
    for (i = 0; i < sizeSource1; i++) {
        arrTarget[i] = arrSource1[i];
    }
    for (i = 0; i < sizeSource2; i++) {
        arrTarget[i] = arrSource2[i];
    }
    free(arrSource1);
    free(arrSource2);

    // Quick sort
    qsort(arrTarget, sizeTarget, sizeof(int), compare_int);

    // Rewrite the result into another file
    fputs("저장할 파일명? ", stdout);
    fgets(filenameTarget, STR_SIZE, stdin);
    filenameTarget[strlen(filenameTarget) - 1] = '\0';
    fpTarget = fopen(filenameTarget, "wb");
    if (fpTarget == NULL) {
        puts("파일 열기 실패\n");
        free(arrTarget);
        return 1;
    }
    fwrite(arrTarget, sizeof(int), sizeTarget, fpTarget);
    printf("정수 %zu개를 저장했습니다.\n", sizeTarget);
    fclose(fpTarget);

    return 0;
}
