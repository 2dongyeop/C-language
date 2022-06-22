#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char ch;
    printf("문자를 입력하시오:");
    scanf("%c", &ch);

    switch (ch) {
        case 'a':
        case 'i':
        case 'o':
        case 'u':
        case 'e':
        case 'A':
        case 'I':
        case 'O':
        case 'U':
        case 'E':
            printf("모음입니다.\n");
            break;
        default:
            printf("자음입니다.\n");
            break;
    }
    return 0;
}