#include <stdio.h>

#define ARR_SIZE 10

int add_to_set(int *set, size_t set_size, int *set_head, int value_to_add) {
    if (*set_head == ARR_SIZE) {
        printf("세트가 가득 찼습니다.\n");
        return 0;
    }

    for (int i = 0; i < *set_head; i++) {
        if (set[i] == value_to_add) {
            printf("해당 원소가 이미 [%d]에 존재합니다.\n", i);
            return 0;
        }
    }
    set[(*set_head)++] = value_to_add;
    return 1;
}

int main() {
    int set[ARR_SIZE];
    int head = 0, value;
    while (head < ARR_SIZE) {
        printf("배열에 추가할 원소? ");
        if (scanf("%d", &value) == 1) {
            add_to_set(set, ARR_SIZE, &head, value);
            for (int i = 0; i < head; i++) {
                printf("%d ", set[i]);
            }
            printf("\n");
        } else {
            while (getchar() != '\n');
        }
    }
    return 0;
}
