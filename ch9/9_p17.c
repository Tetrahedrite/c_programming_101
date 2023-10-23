#include <stdio.h>
#include <string.h>

#define STR_SIZE 1024

#define SONG_COUNT 20
#define SONG_NAME_SIZE (40 + 1)

static void add_song(char (*songs)[SONG_NAME_SIZE], int *phead) {
    char str[STR_SIZE];
    if (*phead < SONG_COUNT) {
        printf("노래 제목? ");
        fgets(str, STR_SIZE, stdin);
        str[strlen(str) - 1] = '\0';
        strcpy(songs[(*phead)++], str);
    } else {
        puts("최대 20개까지만 추가할 수 있습니다.");
    }
}

static void modify_song_name(char (*songs)[SONG_NAME_SIZE], int head) {
    char str[STR_SIZE];
    printf("찾을 노래 제목? ");
    fgets(str, STR_SIZE, stdin);
    str[strlen(str) - 1] = '\0';

    int found = 0;
    for (int i = 0; i < head; i++) {
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
}

static void list_songs(char (*songs)[SONG_NAME_SIZE], int head) {
    puts("<< 노래 제목 >>");
    for (int i = 0; i < head; i++) {
        puts(songs[i]);
    }
}

int main() {
    char songs[SONG_COUNT][SONG_NAME_SIZE];
    unsigned int menu, song_head = 0;

    while (1) {
        printf("[ 0.종료 1.추가 2.수정 3.목록 ] 선택? ");
        scanf("%u", &menu);
        while (getchar() != '\n');

        switch (menu) {
            case 0: // 종료
                return 0;
            case 1: // 추가
                add_song(songs, &song_head);
                break;
            case 2: // 수정
                modify_song_name(songs, song_head);
                break;
            case 3: // 목록
                list_songs(songs, song_head);
                break;
            default:
                puts("잘못된 입력입니다.");
                break;
        }
    }

    return 0;
}
