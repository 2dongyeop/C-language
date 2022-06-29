#include <stdio.h>

#define CRT_SECURE_NO_WARNINGS

save(int amount);  //저금할 금액 amout를 받음
draw(int amount);

static int sum = 0;  //전역변수 예금잔액

int main(void) {
    int menu, amount;
    int i;
    bool isExit = true;

    while (isExit) {
        printf("메뉴를 선택하세요: 저축(1), 인출(2), 종료(3) :");
        scanf(" %d", &menu);
        if (menu == 1) {
            printf("저축할 금액: ");
            scanf(" %d", &amount);
            save(amount);
        } else if (menu == 2) {
            printf("인출할 금액: ");
            scanf(" %d", &amount);
            draw(amount);
        } else if (menu == 3) {
            isExit = false;
        }
    }
}

void save(int amount) {
    sum = sum + amount;
    printf("현재 잔액은 %d입니다.\n", sum);
}

void draw(int amount)   //인출
{
    if (sum >= amount) //잔액이 인출하려는 금액보다 많으면 인출가능
    {
        sum = sum - amount;
        printf("현재 잔액은 %d입니다.\n", sum);
    }
    else {
        printf("잔액이 부족합니다.");
    }
}