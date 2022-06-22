#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    int number, sum;
    sum = 0;
    while (scanf("%d", &number) != EOF) {
        sum += number;
    }
    printf("정수의 합은 %d입니다. \n", sum);
    return 0;
}