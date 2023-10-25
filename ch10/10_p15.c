#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tagPOINT {
    int x;
    int y;
} POINT;

void swap_point(POINT *p1, POINT *p2) {
    POINT tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main() {
    srand(time(NULL));
    POINT point[10] = {
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
        { rand() % 100, rand() % 100 },
    };

    printf("<<정렬 전>>\n");
    // Print all points
    for (int i = 0; i < 10; i++)
        printf("(%d, %d)", point[i].x, point[i].y);
    printf("\n");

    printf("<<정렬 후>>\n");
    // Selection sort
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (point[i].x > point[j].x)
                swap_point(&point[i], &point[j]);
        }
    }

    // Print all points
    for (int i = 0; i < 10; i++) {
        printf("(%d, %d)", point[i].x, point[i].y);
    }
    printf("\n");
    
    return 0;
}
