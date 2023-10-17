#include <stdio.h>

#define MATRIX_COL 3
#define MATRIX_ROW 3

void add_matrix(const int *matrix_a, const int *matrix_b, int *matrix_out, int size) {
    for (int i = 0; i < size; i++)
        matrix_out[i] = matrix_a[i] + matrix_b[i];
}

int main() {
    int matrix_x[MATRIX_COL][MATRIX_ROW] = {
        { 10, 20, 30 },
        { 40, 50, 60 },
        { 70, 80, 90 },
    };
    int matrix_y[MATRIX_COL][MATRIX_ROW] = {
        { 9, 8, 7 },
        { 6, 5, 4 },
        { 3, 2, 1 },
    };
    int matrix_out[MATRIX_COL][MATRIX_ROW];

    printf("x 행렬:\n");
    for (int i = 0; i < MATRIX_COL; i++) {
        for (int j = 0; j < MATRIX_ROW; j++) {
            printf("%3d ", matrix_x[i][j]);
        }
        printf("\n");
    }

    printf("y 행렬:\n");
    for (int i = 0; i < MATRIX_COL; i++) {
        for (int j = 0; j < MATRIX_ROW; j++) {
            printf("%3d ", matrix_y[i][j]);
        }
        printf("\n");
    }

    add_matrix(matrix_x[0], matrix_y[0], matrix_out[0], MATRIX_COL * MATRIX_ROW);

    printf("x + y 행렬:\n");
    for (int i = 0; i < MATRIX_COL; i++) {
        for (int j = 0; j < MATRIX_ROW; j++) {
            printf("%3d ", matrix_out[i][j]);
        }
        printf("\n");
    }

    return 0;
}
