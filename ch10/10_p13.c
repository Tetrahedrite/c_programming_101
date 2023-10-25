#include <stdio.h>

typedef struct tagPOINT {
    int x;
    int y;
} POINT;

typedef struct tagRECT {
    POINT left_bottom;
    POINT right_top;
} RECT;

void print_rect(const RECT *rect) {
    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n",
           rect->left_bottom.x, rect->left_bottom.y,
           rect->right_top.x, rect->right_top.y);
}

int main() {
    RECT rect;

    printf("직사각형의 좌하단점(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    printf("직사각형의 우상단점(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    print_rect(&rect);
    return 0;
}
