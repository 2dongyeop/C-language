#include <stdio.h>

#define CRT_SECURE_NO_WARNINGS

typedef struct employee {
    int num;
    char name[10];
    char hp[15];
    int age;
} employee;

int main(void) {
    employee s[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("사번:");
        scanf(" %d", &s[i].num);

        printf("이름:");
        scanf(" %s", &s[i].name);  //name과 hp는 문자배열이므로 주소연산자 사용x, 배열이름은 그자체로 포인터

        printf("전화번호:");
        scanf(" %s", &s[i].hp);

        printf("나이:");
        scanf(" %d", &s[i].age);

    }

    for (i = 0; i < 10; i++) {
        if (s[i].age >= 20 && s[i].age <= 30)
            printf("20세 이상, 30세 이하인 직원:%s\n", s[i].name);

    }


    return 0;
}