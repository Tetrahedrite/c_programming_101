#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024

int compareFile(FILE *fp1, FILE *fp2) {
    while (1) {
        char c1 = fgetc(fp1);
        char c2 = fgetc(fp2);

        if (feof(fp1) && feof(fp2)) {
            return 1;
        } else if (c1 != c2) {
            return 0;
        }
    }
}

int main() {
    char filename_original[BUF_SIZE], filename_target[BUF_SIZE];
    FILE *fp_original, *fp_target;

    printf("원본 파일? ");
    fgets(filename_original, BUF_SIZE, stdin);
    filename_original[strlen(filename_original) - 1] = '\0';

    fp_original = fopen(filename_original, "r");
    if (fp_original == NULL) {
        printf("원본 파일 열기 실패\n");
        return 1;
    }

    printf("타겟 파일? ");
    fgets(filename_target, BUF_SIZE, stdin);
    filename_target[strlen(filename_target) - 1] = '\0';

    fp_target = fopen(filename_target, "r");
    if (fp_target == NULL) {
        if (fp_original)
            fclose(fp_original);
        printf("타겟 파일 열기 실패\n");
        return 1;
    }

    int result;
    if (result = compareFile(fp_original, fp_target)) {
        puts("두 파일이 같습니다.");
    } else {
        puts("두 파일이 다릅니다.");
    }

    fclose(fp_original);
    fclose(fp_target);
    return result;
}
