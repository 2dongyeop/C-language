#include <stdio.h>

struct food {
    char name[100];
    int calories;
};

int main(void) {
    int i, sum = 0;
    struct food list[2] = {
            {"a", 100},      //a라는 이름의 음식 칼로리는 100
            {"b", 200}       //b라는 이름의 음식 칼로리는 200
    };

    for (i = 0; i < 2; i++) {
        sum = sum + list[i].calories;
    }
    printf("전체 칼로리 : %d", sum);

    return 0;
}