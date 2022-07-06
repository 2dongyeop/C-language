#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s;

    do {
        printf("문자를 입력하시오:");
        s = getchar();

        if (isalpha(s)) {
            if (islower(s)) {
                s = toupper(s);
                putchar(s);
            } else if (isupper(s)) {
                s = tolower(s);
                putchar(s);
            }
            fflush(stdin);
        } else
            printf("영문자가 아닙니다.");
    } while (s != '.');

    return 0;
}