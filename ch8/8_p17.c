#include <stdio.h>

#define ARR_SIZE 10

int add_to_multiset(int *multiset, size_t multiset_size, int multiset_head, int value_to_add) {
    if (multiset_head == ARR_SIZE)
        return 0;

    multiset[multiset_head] = value_to_add;
    return 1;
}

int main() {
    int multiset[ARR_SIZE];
    int head = 0, value;
    while (head < ARR_SIZE) {
        printf("배열에 추가할 원소? ");
        if (scanf("%d", &value) == 1 && add_to_multiset(multiset, ARR_SIZE, head++, value)) {
            for (int i = 0; i < head; i++) {
                printf("%d ", multiset[i]);
            }
            printf("\n");
        } else {
            printf("잘못된 값\n");
            while (getchar() != '\n');
        }
    }
    return 0;
}
