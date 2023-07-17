#include <stdio.h>

unsigned char get_red(int rgb_color) {
    return rgb_color >> 0;
}

unsigned char get_green(int rgb_color) {
    return rgb_color >> 8;
}

unsigned char get_blue(int rgb_color) {
    return rgb_color >> 16;
}

int main() {
    int rgb_color;

    printf("RGB 색상? ");
    scanf("%x", &rgb_color);

    printf("RGB %06X의 red: %hhu, green: %hhu, blue: %hhu\n", \
        rgb_color, get_red(rgb_color), get_green(rgb_color), get_blue(rgb_color));
    return 0;
}
