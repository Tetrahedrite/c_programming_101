#include <stdio.h>
#include <string.h>

#define STR_SIZE 1024

#define SONG_COUNT 20
#define SONG_NAME_SIZE (40 + 1)

int main() {
    char songs[SONG_COUNT][SONG_NAME_SIZE];
    char str[STR_SIZE];
    unsigned int menu, song_head = 0;

    while (1) {
        printf("[ 0.종료 1.추가 2.수정 3.목록 ] 선택? ");
        scanf("%u", &menu);
        while (getchar() != '\n');

        switch (menu) {
            case 0: // 종료
                return 0;
            case 1: // 추가
                if (song_head < SONG_COUNT) {
                    printf("노래 제목? ");
                    fgets(str, STR_SIZE, stdin);
                    str[strlen(str) - 1] = '\0';
                    strcpy(songs[song_head++], str);
                } else {
                    puts("최대 20개까지만 추가할 수 있습니다.");
                }
                break;
            case 2: // 수정
                printf("찾을 노래 제목? ");
                fgets(str, STR_SIZE, stdin);
                str[strlen(str) - 1] = '\0';

                int found = 0;
                for (int i = 0; i < song_head; i++) {
                    if (strcmp(songs[i], str) == 0) {
                        printf("수정할 제목? ");
                        fgets(str, STR_SIZE, stdin);
                        str[strlen(str) - 1] = '\0';
                        strcpy(songs[i], str);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    puts("노래 제목을 찾을 수 없습니다.");
                break;
            case 3: // 목록
                puts("<< 노래 제목 >>");
                for (int i = 0; i < song_head; i++) {
                    puts(songs[i]);
                }
                break;
            default:
                puts("잘못된 입력입니다.");
                break;
        }
    }

    return 0;
}
