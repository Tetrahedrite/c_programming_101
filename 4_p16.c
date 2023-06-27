#include <stdio.h>

int main() {
    int red, green, blue, true_color = 0;

    printf("red? ");
    scanf("%d", &red);

    printf("green? ");
    scanf("%d", &green);

    printf("blue? ");
    scanf("%d", &blue);

    true_color = \
        (unsigned char)blue << 16 | \
        (unsigned char)green << 8 | \
        (unsigned char)red << 0;
    printf("RGB 트루컬러: %06X\n", true_color);

    return 0;
}
