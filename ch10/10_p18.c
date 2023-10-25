#include <stdio.h>
#include <string.h>

#define PLAYLIST_SIZE 5

typedef struct tagSONG {
    char name[30];
    char artist[20];
    char genre[10];
    unsigned int play_time;
} SONG;

int main() {
    unsigned int playlist_head = 0;
    SONG playlist[PLAYLIST_SIZE];
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

    printf("    %-*s%-*s%-*s%-*s\n",
           (int)sizeof(songs[0].name), "제목",
           (int)sizeof(songs[0].artist), "아티스트",
           (int)sizeof(songs[0].genre), "장르",
           10, "재생시간");
    for (int i = 0; i < sizeof(songs) / sizeof(songs[0]); i++) {
        printf("%2d: %-*s%-*s%-*s%u초\n", i + 1,
               (int)sizeof(songs[i].name), songs[i].name,
               (int)sizeof(songs[i].artist), songs[i].artist,
               (int)sizeof(songs[i].genre), songs[i].genre,
               songs[i].play_time);
    }

    while (1) {
        int selected_song;
        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &selected_song);

        if (selected_song == 0)
            break;
        
        playlist[playlist_head++] = songs[selected_song - 1];

        unsigned int total_playtime = 0;
        printf("<< 플레이리스트 >>\n");
        for (int i = 0; i < playlist_head; i++) {
            printf("%-*s%-*s%-*s%u초\n",
                   (int)sizeof(playlist[i].name), playlist[i].name,
                   (int)sizeof(playlist[i].artist), playlist[i].artist,
                   (int)sizeof(playlist[i].genre), playlist[i].genre,
                   playlist[i].play_time);
            total_playtime += playlist[i].play_time;
        }
        printf("총 재생시간 : %u초\n", total_playtime);
        
        if (playlist_head == PLAYLIST_SIZE) {
            printf("플레이리스트가 가득찼습니다.\n");
            break;
        }
    }
    return 0;
}
