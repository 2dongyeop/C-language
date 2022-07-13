#include <stdio.h>

#define CRT_SECURE_NO_WARNINGS
struct point {
    int x;
    int y;
} a, b;

struct rectangle {
    struct point a, b; //a는 오른쪽 상단, b는 왼쪽 하단
};

int area(struct rectangle r) {
    int w = r.a.x - r.b.x;
    int h = r.a.y - r.b.y;

    return w * h;
}

int perimeter(struct rectangle r) {
    int w = r.a.x - r.b.x;
    int h = r.a.y - r.b.y;

    return 2 * (w + h);
}

int is_square(struct rectangle r) {
    int w = r.a.x - r.b.x;
    int h = r.a.y - r.b.y;

    if (w == h) return 0;
    else return 1;
}

int main() {
    struct rectangle r;

    printf("x좌표, y좌표:");
    scanf("%d %d", &r.a.x, &r.a.y);

    printf("x좌표, y좌표:");
    scanf("%d %d", &r.b.x, &r.b.y);

    printf("%d\n", area(r));
    printf("%d\n", perimeter(r));

    if (is_square(r) == 0) {
        printf("정사각형입니다.\n");
    } else {
        printf("정사각형이 아닙니다.\n");
    }
}
