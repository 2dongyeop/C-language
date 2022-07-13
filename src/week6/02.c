#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS
struct point
{
    int x;
    int y;
}p;

int quadrant(struct point *p)
{
    if (p->x>0 && p->y>0 )
        return printf("1사분면");
    else if (p->x < 0 && p->y > 0)
    {
        return printf("2사분면");
    }
    else if (p->x < 0 && p->y < 0)
    {
        return printf("3사분면");
    }
    else if (p->x > 0 && p->y < 0)
    {
        return printf("4사분면");
    }

}
int main(void)
{
    printf("x좌표, y좌표:");
    scanf("%d %d", &p.x, &p.y);

    quadrant(&p);


    return 0;
}