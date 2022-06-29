#include <stdio.h>

transpose(int a[][3], int b[][3]);


int main(void) {
    int i, j;

    int a[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    int b[3][3] = {0};

    transpose(a, b);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

transpose(int a[][3], int b[][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            b[i][j] = a[j][i];
        }
    }
}