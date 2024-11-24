#include <stdio.h>
#include "kjh.h"

int main(void) {
    int i, x, y;
    float result;
    i = select_menu();
    get_operand(&x, &y);
    result = arithm_op(i, x, y);
    print_result(result);
    return 0;
}

int select_menu(void) {
    int i = 0;
    do {
        printf("다음 메뉴 번호를 선택하세요.\n");
        printf("1 : 덧셈\n");
        printf("2 : 뺄셈\n");
        printf("3 : 곱셈\n");
        printf("4 : 나눗셈\n");
        scanf("%d", &i);
    } while (i < 1 || i > 4);
    return i;  
}

float arithm_op(int i, int x, int y){
    float result;
    switch(i) {
    case 1:
        result = add(x, y);
        break;
    case 2:
        result = sub(x, y);
        break;
    case 3:
        result = mul(x, y);
        break;
    case 4:
        result = div(x, y);
        break;
    default:
        ;
        break;
    }
    return result;
}

int add(int x, int y) {
    return x + y;
}

int sub (int x, int y) {
    return x - y;
}

int mul (int x, int y) {
    return x * y;
}

float div (int x, int y) {
    return (float)x / (float)y;
}

int get_operand(int *x, int *y){
    int num;
    printf("첫번째 정수를 입력하세요: ");
    scanf("%d", &num);
    *x = num;
    printf("두번째 정수를 입력하세요: ");
    scanf("%d", &num);
    *y = num;
}

float print_result(float result){
    printf("\n결과는 %f 입니다.\n", result);
}