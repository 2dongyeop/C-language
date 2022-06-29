//1/1 + 1/2 + 1/3 + .... + 1/n
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double recursive(double n);

int main(void) {
    int n;
    printf("정수를 입력:");
    scanf("%d", &n);
    printf("%lf", recursive(n));  //순환 호출

    return 0;
}

double recursive(double n) {

    if (n == 1)
        return 1;
    else
        return 1.0 / n + (double) recursive(n - 1);

    /*
    n=3이면
recursive(3)
if(n>=1)
    return 1.0 / n + recursive(2);  =>1.0/3.0 + recursive(2)

recursive(2)
if(n>=1)
    return 1.0 / n + recursive(1);   => 1.0/2.0+recursive(1)

recursive(1)
if(n>=1)
    return 1.0 / n + recursive(0);   => 1.0/1.0+recursive(0)

recursive(0)
return 0;

    */
}