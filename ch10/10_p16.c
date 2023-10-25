#include <stdio.h>

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

    printf("%-*s%-*s%-*s%-*s\n",
           (int)sizeof(songs[0].name), "제목",
           (int)sizeof(songs[0].artist), "아티스트",
           (int)sizeof(songs[0].genre), "장르",
           10, "재생시간");

    for (int i = 0; i < sizeof(songs) / sizeof(songs[0]); i++) {
        printf("%-*s%-*s%-*s%u초\n",
               (int)sizeof(songs[i].name), songs[i].name,
               (int)sizeof(songs[i].artist), songs[i].artist,
               (int)sizeof(songs[i].genre), songs[i].genre,
               songs[i].play_time);
    }
    return 0;
}
