#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 16

int main() {
    unsigned char image1[ARR_SIZE], image2[ARR_SIZE], image3[ARR_SIZE];

    srand(time(NULL));
    printf("image1: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        image1[i] = rand() % 256;
        printf("%02X ", image1[i]);
    }
    printf("\n");

    printf("image2: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        image2[i] = rand() % 256;
        printf("%02X ", image2[i]);
    }
    printf("\n");

    printf("image3: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        image3[i] = image1[i] | image2[i];
        printf("%02X ", image3[i]);
    }
    printf("\n");
    return 0;
}
