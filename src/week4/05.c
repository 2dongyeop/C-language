#include <stdio.h>

void show_digit(int x);


int main(void) {
    int x;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    show_digit(x);

    return 0;
}

void show_digit(int x) {
    if (x < 10)
        printf("%d ", x);
    else {
        show_digit(x / 10);
        printf("%d ", x % 10);
    }
}