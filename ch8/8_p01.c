#include <stdio.h>

#define ARR_SIZE 3

int main() {
    double arr[ARR_SIZE] = { 0, };
    
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("x[%d]의 주소: %p\n", i, arr + i);
    }

    return 0;
}
