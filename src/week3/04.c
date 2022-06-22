#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {

    int x, y;
    char op;

    do
    {
        printf("\n****************\n");
        printf("A----Add\n");
        printf("S----Subtract\n");
        printf("M----Multiply\n");
        printf("D----Divide\n");
        printf("Q----Quit\n");
        printf("****************\n");
        printf("연산을 선택하시오: ");
        scanf(" %c", &op);

        if (op == 'Q')
            break;

        switch (op)
        {
            case 'A':
                printf("두수를 공백으로 분리하여 입력하시오: ");
                scanf(" %d %d", &x, &y);
                printf("연산의 결과는 %d입니다.\n", x + y);
                break;
            case 'S':
                printf("두수를 공백으로 분리하여 입력하시오: ");
                scanf(" %d %d", &x, &y);
                printf("연산의 결과는 %d입니다.\n", x - y);
                break;
            case 'M':
                printf("두수를 공백으로 분리하여 입력하시오: ");
                scanf(" %d %d", &x, &y);
                printf("연산의 결과는 %d입니다.\n", x * y);
                break;
            case 'D':
                printf("두수를 공백으로 분리하여 입력하시오: ");
                scanf(" %d %d", &x, &y);
                printf("연산의 결과는 %d입니다.\n", x / y);
                break;

            case 'Q':
                break;

            default:
                break;
        }
    } while (1);


    return 0;

}