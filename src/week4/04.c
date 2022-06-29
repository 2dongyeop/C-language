#include <stdio.h>

int recursive(int n, int k);

void main() {

    int n, k;

    printf("n, k의 값을 입력하세요 >> ");
    scanf("%d %d", &n, &k);

    printf("결과 : %d", recursive(n, k));
}


int recursive(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return recursive(n - 1, k - 1) + recursive(n - 1, k);
}
