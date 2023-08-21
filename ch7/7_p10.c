#include <stdio.h>

#define MATRIX_X 3
#define MATRIX_Y 3

int main() {
    int matrix1[MATRIX_X][MATRIX_Y] = {
        { 10, 20, 30, },
        { 40, 50, 60, },
        { 70, 80, 90, },
    };

    int matrix2[MATRIX_X][MATRIX_Y] = {
        { 9, 8, 7, },
        { 6, 5, 4, },
        { 3, 2, 1, },
    };

    int sum_of_matrix[MATRIX_X][MATRIX_Y];

    // sum of matrix
    for (int i = 0; i < MATRIX_X; i++) {
        for (int j = 0; j < MATRIX_Y; j++) {
            sum_of_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // print matrix1
    printf("x 행렬:\n");
    for (int i = 0; i < MATRIX_X; i++) {
        for (int j = 0; j < MATRIX_Y; j++) {
            printf(" %2d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // print matrix2
    printf("y 행렬:\n");
    for (int i = 0; i < MATRIX_X; i++) {
        for (int j = 0; j < MATRIX_Y; j++) {
            printf(" %2d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // print sum_of_matrix
    printf("x + y 행렬:\n");
    for (int i = 0; i < MATRIX_X; i++) {
        for (int j = 0; j < MATRIX_Y; j++) {
            printf(" %2d ", sum_of_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
