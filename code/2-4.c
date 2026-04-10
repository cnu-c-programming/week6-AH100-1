#include <stdio.h>

void point_2d_arr(int* row[], int row_size, int col_size) {
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            printf("%d ", row[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int* row[2] = {arr[0], arr[1]};

    point_2d_arr(row, 2, 3);
}