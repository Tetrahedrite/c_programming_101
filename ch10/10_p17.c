#include <stdio.h>
#include <string.h>

typedef struct tagSONG {
    char name[30];
    char artist[20];
    char genre[10];
    unsigned int play_time;
} SONG;

int main() {
    SONG songs[] = {
        { "별 보러 가자", "박보검", "ballad", 316 },
        { "Awake", "방탄소년단", "ballad", 226 },
        { "I'm fine", "방탄소년단", "hip-hop", 209 },
        { "봄날", "방탄소년단", "hip-hop", 274 },
        { "아낙네", "MINO", "hip-hop", 241 },
        { "thank u, next", "Ariana Grande", "pop", 208 },
        { "Attention", "Charlie Puth", "pop", 211 },
        { "How Long", "Charlie Puth", "pop", 198 },
    };

    while (1) {
        char keyword[30];
        printf("키워드(제목/아티스트)? ");
        fgets(keyword, 30, stdin);
        keyword[strlen(keyword) - 1] = '\0';

        if (strcmp(keyword, ".") == 0)
            break;

        for (int i = 0; i < sizeof(songs) / sizeof(songs[0]); i++) {
            if (strstr(songs[i].name, keyword) != NULL || strstr(songs[i].artist, keyword) != NULL) {
                printf("%-*s%-*s%-*s%u초\n",
                       (int)sizeof(songs[i].name), songs[i].name,
                       (int)sizeof(songs[i].artist), songs[i].artist,
                       (int)sizeof(songs[i].genre), songs[i].genre,
                       songs[i].play_time);
            }
        }
    }
    return 0;
}
