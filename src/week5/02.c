#include <stdio.h>

void merge(int *A, int *B, int *C, int size);

int main(void) {
    int A[4] = {2, 5, 7, 8};
    int B[4] = {1, 3, 4, 6};
    int C[8] = {0};

    merge(A, B, C, 8);

    for (int i = 0; i < 8; ++i) {
        printf("%d ", C[i]);
    }
}

void merge(int *A, int *B, int *C, int size) {
    int aIndex = 0, bIndex = 0, cIndex = 0;
    while (cIndex < size) {
        if (aIndex != 4 && bIndex != 4) {
            if (A[aIndex] < B[bIndex]) {
                C[cIndex] = A[aIndex];
                cIndex++;
                aIndex++;
            } else if (A[aIndex] > B[bIndex]) {
                C[cIndex] = B[bIndex];
                cIndex++;
                bIndex++;
            }
        } else if (bIndex == 4 && aIndex != 4) {
            C[cIndex] = A[aIndex];
            aIndex++;
            cIndex++;
        } else if (bIndex != 4 && aIndex == 4) {
            C[cIndex] = B[bIndex];
            bIndex++;
            cIndex++;
        }
    }
}


