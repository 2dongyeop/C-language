#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    int i, j, sum;
    int x[3][5] = {{12, 56, 32, 16, 98},
                   {99, 56, 34, 41, 3},
                   {65, 3,  87, 78, 21}};
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 5; j++)
            sum += x[i][j];
        printf("%d행의 합계: %d\n", i, sum);
    }
    for (j = 0; j < 5; j++) {
        sum = 0;
        for (i = 0; i < 3; i++)
            sum += x[i][j];
        printf("%d열의 합계: %d\n", j, sum);
    }
    return 0;
}