#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYLIST_SIZE 10

void swap(int arr[], int i, int j) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int playlist[PLAYLIST_SIZE];
    srand(time(NULL));

    printf("셔플 전: ");
    for (int i = 0; i < PLAYLIST_SIZE; i++) {
        playlist[i] = rand() % 100;
        printf("%d ", playlist[i]);
    }
    printf("\n");

    printf("셔플 후: ");
    for (int i = 0; i < PLAYLIST_SIZE; i++) {
        swap(playlist, i, rand() % (PLAYLIST_SIZE - i) + i);
        printf("%d ", playlist[i]);
    }
    printf("\n");
    
    return 0;
}
