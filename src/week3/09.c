//사용자가 입력한 특정한 정수의자리수를반대로 출력하는 프로그램
// 입력 : 1206-> 출력 : 6021
#include <stdbool.h>
#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
bool isPlus(int a);

int main(void) {
    int a, b, c, d, e;

    do {
        printf("정수를 입력하시오: ");
        scanf("%d", &a);
    } while (!isPlus(a));

    b = a % 10;       //1의 자리수는 n%10으로 구할 수 있다.
    c = (a / 10) % 10;   // 10의 자리수는 n을 10으로 나눈 후에 n%10을 하면 된다.
    d = (a / 100) % 10;//100의 자리수는 n을 100으로 나눈 후 n%10 하면 된다.
    e = (a / 1000) % 10;  // 1000의 자리수는 n을 1000으로 나눈 후 n%10을 하면 된다.

    printf("%d%d%d%d", b, c, d, e);  //입력한 값과 순서가 거꾸로 나와야 한다.
    return 0;
}

bool isPlus(int a) {
    if (a > 0) return true;
    else return false;
}