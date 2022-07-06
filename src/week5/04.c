#include <stdio.h>
#include <string.h>

int str_chr(char *s, char c);

int main(void) {
    char i;
    char s[100] = "";

    printf("문자열을 입력하시오:");
    gets(s);

    printf("개수를 셀 문자를 입력하시오: ");
    i = getchar();

    printf("%c의 개수:%d", i, str_chr(s, i));
    return 0;
}

int str_chr(char *s, char c) {
    int i, num = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == c)  //개수를 셀 문자와 문자열의 문자가 같으면 +1
            num++;
    }
    return num;
}