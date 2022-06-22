//2와 100사이의 모든 소수를 찾는 프로그램
#include <stdio.h>


int main(void) {
    int i, j;

    for (i = 2; i <= 100; i++) {
        for (j = 2; j <= i; j++) {
            if (i == j) printf("%d ", i);
            else if (i % j == 0) break;
            //1과 자기자신이 아닌 다른수로 나누어 떨어지면 소수가 아님
        }
    }

    return 0;
}