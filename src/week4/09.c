#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int tile[20][20] = {0};

    int number = rand() % 8;

    while(!isFull(tile)) {

    }


}

static bool isFull(int a[20][20]) {
    int i, j;

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            if (a[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}