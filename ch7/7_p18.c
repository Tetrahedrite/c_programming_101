#include <stdio.h>

#define ARR_SIZE 10

int main() {
    int arr[ARR_SIZE] = {0};
    int element_to_push, head = 0;

    // 배열이 꽉차기 전까지 입력받기
    while (head < ARR_SIZE) {
        printf("배열에 추가할 원소? ");

        // 입력이 정상일 경우
        if (scanf("%d", &element_to_push) > 0) {
            // 중복 체크
            int duplication = -1;
            for (int i = 0; i < head; i++) {
                if (arr[i] == element_to_push) {
                    duplication = i;
                    break;
                }
            }

            // 중복 없으면 배열에 추가
            if (duplication == -1)
                arr[head++] = element_to_push;
            else
                printf("해당 원소가 이미 [%d]에 존재합니다.\n", duplication);
        } else { // 입력이 정상이 아닌 경우
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");
            while (getchar() != '\n'); // 버퍼 비우기
            continue;
        }

        // 배열 출력
        for (int i = 0; i < head; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
