#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    char ch;

    unsigned int num = 0x00000000; //32비트

    printf("첫번째 문자:");        //0~7비트 저장
    scanf("%c", &ch);
    num = num | ch;
    getchar();
    printf("%08x\n", ch);

    printf("2번째 문자:");        //0~7비트 저장
    scanf("%c", &ch);
    num = num << 8;
    num = num | ch;
    getchar();
    printf("%08x\n", ch);

    printf("3번째 문자:");        //0~7비트 저장
    scanf("%c", &ch);
    num = num << 8;
    num = num | ch;
    getchar();
    printf("%08x\n", ch);

    printf("4번째 문자:");        //0~7비트 저장
    scanf("%c", &ch);
    num = num << 8;
    num = num | ch;
    getchar();
    printf("%08x\n", ch);


    printf("결과값: %08x\n", num);

    return 0;


}
