#include <stdio.h>

typedef union tagMydata {
    struct {
        short low_word;
        short high_word;
    };
    int dword;
} mydata;

void make_dword(short low_word, short high_word, mydata *d) {
    d->low_word = low_word;
    d->high_word = high_word;
}

int main() {
    short low_word, high_word;
    mydata mydata;
    printf("low word? ");
    scanf("%hi", &low_word);

    printf("high word? ");
    scanf("%hi", &high_word);

    make_dword(low_word, high_word, &mydata);

    printf("dword data: %x\n", mydata.dword);
    return 0;
}
