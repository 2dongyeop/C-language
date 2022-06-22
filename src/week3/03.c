/*피보나치수열 : 앞의 2개의 원소를 합해 뒤의 원소를 만든다.*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int a = 0, b = 1, c;   //0번째항=0, 1번째항=1 이 주어짐
    int n, i;

    printf("몇 번째 항까지 구할까요? \t");
//    fflush(stdout);
    scanf(" %d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", a); //첫째항 부터 출력한다.
        c = a + b;  // 앞의 두개의 원소를 합하여 뒤의 원소를 만듦
        a = b;      // b값을 a에 넣는다. printf에서 다음항을 출력하고 다음 c를 만들기 위해
        b = c;      //다음 c를 만들기 위해서
    }
    return 0;
/*
a=0 b=1 c 이면 c는 a+b=1이 된다. => 결과: 0 1 1
다음 항을 구해야 하니까 두번째 1이 a가 되고 세번째 1이 b가 되어야 다음 c를 구할수 있다.
*/

}