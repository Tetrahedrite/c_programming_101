#include <stdio.h>

#define STUDENT_COUNT 5
#define SCORE_COLUMNS 4

int main() {
    int scores[STUDENT_COUNT][SCORE_COLUMNS] = {
        { 28, 28, 26, 9, },
        { 30, 27, 30, 10, },
        { 25, 26, 24, 8, },
        { 18, 22, 22, 5, },
        { 24, 25, 30, 10, },
    };

    // 학생 수만큼 반복, 각 항목 및 합계 출력
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("학 생   %d번: %5d %5d %5d %5d   ==> %3d\n",
               i + 1, // Student Index
               scores[i][0], // Student Score Column 1
               scores[i][1], // Student Score Column 2
               scores[i][2], // Student Score Column 3
               scores[i][3], // Student Score Column 4
               scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3] // Total Score
               );
    }

    // 각 항목별로 반복, 각 항목의 평균을 출력
    printf("항목별 평균:    ");
    for (int column = 0; column < SCORE_COLUMNS; column++) {
        double average = 0;
        for (int student = 0; student < STUDENT_COUNT; student++) {
            average += scores[student][column];
        }
        average /= STUDENT_COUNT;
        printf("%.2lf ", average);
    }
    printf("\n");

    return 0;
}
