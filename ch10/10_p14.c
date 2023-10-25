#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tagPOINT {
    int x;
    int y;
} POINT;

typedef struct tagRECT {
    POINT left_bottom;
    POINT right_top;
} RECT;

void normalize_rect(RECT *rect) {
    if (rect->left_bottom.x > rect->right_top.x) {
        int tmp = rect->left_bottom.x;
        rect->left_bottom.x = rect->right_top.x;
        rect->right_top.x = tmp;
    }
    if (rect->left_bottom.y > rect->right_top.y) {
        int tmp = rect->left_bottom.y;
        rect->left_bottom.y = rect->right_top.y;
        rect->right_top.y = tmp;
    }
}

POINT center_rect(const RECT *rect) {
    POINT center = {
        (rect->left_bottom.x + rect->right_top.x) / 2,
        (rect->left_bottom.y + rect->right_top.y) / 2
    };
    return center;
}

int main() {
    srand(time(NULL));
    RECT rect[3] = {
        { { rand() % 100, rand() % 100 }, { rand() % 100, rand() % 100 } },
        { { rand() % 100, rand() % 100 }, { rand() % 100, rand() % 100 } },
        { { rand() % 100, rand() % 100 }, { rand() % 100, rand() % 100 } },
    };

    for (int i = 0; i < 3; i++) {
        normalize_rect(&rect[i]);
        int printed = printf("[RECT 좌하단점:(%d, %d), 우상단점:(%d, %d)]",
                             rect[i].left_bottom.x, rect[i].left_bottom.y,
                             rect[i].right_top.x, rect[i].right_top.y);
        for (int space = 60 - printed; space > 0; space--) {
            printf(" ");
        }
        POINT center_point = center_rect(&rect[i]);
        printf("중심점: (%d, %d)\n", center_point.x, center_point.y);
    }

    return 0;
}
