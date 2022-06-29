#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void) {                         // 0 1 2 3 4 5 6 7 8 9
    int x[SIZE] = {0};    // 0 0 0 0 0 0 0 0 0 0
    int i, max;
    int m;

    for (i = 0; i < 100; i++) //0~9까지의 난수를 100번 생성
    {
        ++x[rand() % 10];  //++x[1] 일 경우 0 1 0 0 0 0 0 0 0 0
    }

    for (i = 0; i < SIZE; i++)
        printf("%d %d\n", i, x[i]);

    max = x[0];

    for (i = 1; i < SIZE; i++) {
        if (max < x[i]) {
            max = x[i];
            m = i;
        }
    }
    printf("가장 많이 생성된 수 : %d ", i);

    return 0;
}