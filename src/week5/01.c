#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 10

//11장 5번 문제

int convert(double *grades, double *scores, int size);

int main(void) {
    int i;
    srand((unsigned) time(NULL));

    double grade[SIZE] = {0};
    double scores[SIZE] = {0};

    for (i = 0; i < SIZE; i++) {
        grade[i] = (double) (rand() % 43) / 10;
        printf("학점 : %lf", grade[i]);
        printf("\n");
    }

    printf("\n");
    convert(grade, scores, SIZE);

    for (i = 0; i < SIZE; i++) {
        printf("점수 : %lf ", scores[i]);
        printf("\n");
    }
}

int convert(double *grades, double *scores, int size) {
    for (int i = 0; i < size; i++) {
        scores[i] = (grades[i] * 100) / 4.3;
    }
}