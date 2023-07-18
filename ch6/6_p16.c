#include <stdio.h>
#include <stdlib.h>

int is_bit_set(int data, unsigned int pos) {
    return (data >> pos) & 0x1;
}

int main() {
    int input;

    printf("정수? ");
    scanf("%i", &input);

    printf("%X: ", input);

    for (int pos = 31; pos >= 0; pos--) {
        if (is_bit_set(input, pos))
            printf("1");
        else
            printf("0");

        if (pos % 4 == 0)
            printf(" ");
    }
    printf("\n");

    return 0;
}
