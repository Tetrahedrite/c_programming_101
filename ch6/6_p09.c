#include <stdio.h>

// This is weird problem :( Anyway, It works.

int make_rgb(unsigned char red, unsigned char green, unsigned char blue) {
    return (~red & 0xFF) << 0 | (~green & 0xFF) << 8 | (~blue & 0xFF) << 16;
}

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

    int red = get_red(rgb_color), green = get_green(rgb_color), blue = get_blue(rgb_color);

    printf("RGB %06X의 보색: %06X\n", rgb_color, make_rgb(red, green, blue));
    return 0;
}
