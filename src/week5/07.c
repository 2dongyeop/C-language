#include <stdio.h>
#include <ctype.h>
void str_upper(char *s) {

}

int main(void) {
    char c;
    printf("문자열을 입력하시오: ");
    while ((c = getchar()) != EOF)
        //입력값이 c에 대입되고 c의 값이 EOF값과 다른지, EOF는 파일의 끝이 아니면 반복, 여기서는 입력의 끝을 나타냄
    {
        if (islower(c))   //소문자인가?
            c = toupper(c);   //대문자로 바꿈
        putchar(c);   //화면에 출력
    }
    return 0;
}
