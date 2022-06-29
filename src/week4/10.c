#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ROW 20
#define COL 20

int main() {
    srand((unsigned) time(NULL));

    int i, j, n, m;
    int visit, count = 0;
    int tile[ROW][COL] = {0};

    bool run = true;

    n = ROW / 2, m = COL / 2;
    tile[n][m] = 1;


    while (run) {
        visit = 0;

        for (i = 0; i < ROW; i++) {
            for (j = 0; j < COL; j++) {
                if (tile[i][j] == 1)
                    visit++;
            }
        }

        if (visit == ROW * COL) {
            run = false;
        }
// n값을 줄이면 올라가고 늘리면 내려간다. m값을 줄이면 왼쪽으로 이동 늘리면 오른쪽으로 이동
        switch (rand() % 8) {
            case 0 :
                if (n == 0) break;
                tile[n--][m] = 1;
                count++;
                break;

            case 1 :
                if (n == 0 || m == COL - 1) break;
                tile[n--][m++] = 1;
                count++;
                break;

            case 2 :
                if (n == 0 || m == COL - 1) break;
                tile[n][m++] = 1;
                count++;
                break;

            case 3 :
                if (n == ROW - 1 || m == COL - 1) break;
                tile[n++][m++] = 1;
                count++;
                break;

            case 4 :
                if (n == ROW - 1) break;
                tile[n++][m] = 1;
                count++;
                break;

            case 5 :
                if (n == ROW - 1 || m == 0) break;
                tile[n++][m--] = 1;
                count++;
                break;

            case 6 :
                if (m == 0) break;
                tile[n][m--] = 1;
                count++;
                break;

            case 7 :
                if (n == 0 || m == 0) break;
                tile[n--][m--] = 1;
                count++;
                break;
        }
    }

    printf("딱정벌레의 총 이동수는 %d입니다.", count);
    return 0;
}