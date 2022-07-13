#include <stdio.h>

#define CRT_SECURE_NO_WARNINGS

struct point {
    int x;
    int y;
} p1, p2;

int equal(struct point *p1, struct point *p2) {
    if (p1->x == p2->x && p1->y == p2->y)
        return 1;
    else
        return 0;
}

int main(void) {
    printf("x좌표, y좌표:");
    scanf("%d %d", &p1.x, &p1.y);
    printf("x좌표, y좌표:");
    scanf("%d %d", &p2.x, &p2.y);

    if (equal(&p1, &p2) == 1)
        printf("두 점의 좌표가 일치");
    else
        printf("두 점의 좌표가 일치하지 않음");
    return 0;
}