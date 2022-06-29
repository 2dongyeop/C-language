#include <stdio.h>

#define SIZE 100

int main() {
    int seive[SIZE] = {0};

    int i, j;

    for (i = 2; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (j % i == 0)
                seive[j] = 1;
        }
    }

    for (i = 2; i < SIZE; i++) {
        if (seive[i] == 0)
            printf("%d ", i);
    }
    return 0;
}