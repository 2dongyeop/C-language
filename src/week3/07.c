#include <stdio.h>
#include <math.h>

#define _CRT_SECURE_NO_WARNINGS

int factorial(int n);

int main(void) {
    int m, i;
    double e = 1;

    printf("어디까지 계산할까요?");
    scanf("%d", &m);

    for (i = 1; i <= m; i++) // 1에서 m까지 범위
        e = e + 1.0 / factorial(i); //오일러의 수 계산하는 식, 팩토리얼은 함수 호출해서 구함


    printf("오일러의 수는 %lf입니다.", e);

    return 0;

}

int factorial(int n)  //팩토리얼 구하는 함수
{
    double i, j = 1.0;
    for (i = 1; i <= n; i++)         //i=1부터 n까지 1씩 증가시킴
        j = j * i;    //i값을 j에 곱하면서 누적시킨다.

    return j;

}