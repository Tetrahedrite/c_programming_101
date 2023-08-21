#include <stdio.h>

#define ARR_SIZE 10

int main() {
    int arr[ARR_SIZE] = {0};
    int element_to_push, head = 0;

    while (head < ARR_SIZE) {
        printf("배열에 추가할 원소? ");
        if (scanf("%d", &element_to_push) > 0) {
            arr[head++] = element_to_push;
        } else {
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");
            while (getchar() != '\n');
            continue;
        }
        for (int i = 0; i < head; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
