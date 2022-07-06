#include <stdio.h>
#include <string.h>

#define SIZE 100

void text();

int main(void) {
    char x[] = {};
    printf("공백문자가 있는 문자열을 입력하시오:");
    gets(x);  //gets를 이용해한 줄의 문자열을 입력받음

    text(x);

    printf("%s", x);
    return 0;

}

void text(char *x) {
    int k = 0;
    char tmp[SIZE];

    for (int i = 0; i < (int) strlen(x); i++) {
        if (x[i] != ' ') {
            tmp[k] = x[i];
            k++;
        }
    }
    tmp[k] = 0;
    strcpy(x, tmp);
}