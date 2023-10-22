#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const tips_of_the_day[] = {
    "엔터키를 누를 때마다 사용 팁을 보여줍니다.",
    "Live Photo의 스틸 이미지를 변경할 수 있습니다.",
    "스크린 타임에서 iPhone의 하루 사용 시간을 확인할 수 있습니다.",
};

int main() {
    srand(time(NULL));
    while (getchar() != EOF) {
        const size_t tip_number = rand() % (sizeof(tips_of_the_day) / sizeof(tips_of_the_day[0]));
        puts(tips_of_the_day[tip_number]);
    }
    
    return 0;
}
