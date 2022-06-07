#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int sum = 10;
    double avg1 = 0.0;
    double avg2 = 0.0;

    avg1 = sum / 3;
    avg2 = sum / 3.0;
    printf("%f\n", avg1);
    printf("%f", avg2);

    return 0;
}