#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    int x, y, number;
    printf("정수를 입력하시오: ");
    scanf("%d", &number);

    for (y = 1; y <= number; y++) {
        for (x = 1; x <= y; x++)
            printf("%d ", x);
        printf("\n");
    }
    return 0;
}