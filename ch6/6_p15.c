#include <stdio.h>
#include <math.h>

#define INPUT_NUM 1357
#define INPUT_POS_START 1
#define INPUT_POS_END 3

int round_pos(int x, unsigned int pos) {
    int multiplier = (int)pow(10, pos);
    int divided = x / multiplier;
    return divided * multiplier + (divided % multiplier >= 5 ? multiplier : 0);
}

int main() {
    for (int i = INPUT_POS_START; i <= INPUT_POS_END; i++) {
        printf("%d번째 자리에서 반올림한 결과: %d\n", i, round_pos(INPUT_NUM, i));
    }
    return 0;
}
