#include <stdio.h>
#include <ctype.h>

void caseconv(char in[], char out[]) {
    int i = 0;
    while (in[i] != '\0') {
        if (islower(in[i])) {
            out[i] = toupper(in[i]);
        } else if (isupper(in[i])) {
            out[i] = tolower(in[i]);
        }
        i++;
    }
    out[i] = '\0';
}

void backward(char in[], char out[]) {
    int len = 0;
    while (in[len] != '\0') {
        len++;
    }
    
    for (int i = 0; i < len; i++) {
        out[i] = in[len - i - 1];
    }
    out[len] = '\0';
}

int main(void) {
    char in[100], out[100], backwardin[100], backwardout[100];
    int i;
    printf("�� ���α׷��� ���ĺ����� �� ���ڿ��� ��ҹ���, ������ ��ȯ�ϴ� ���α׷��Դϴ�.");
    printf("���ĺ����� �� ���ڿ��� �Է��Ͻÿ�.: ");
    scanf("%s", in);
    caseconv(in, out);
    printf("��ҹ��� ��ȯ: %s\n", out);
    for(i = 0; i < 100 ; i++)
        backwardin[i] = out[i] ;
    backward(backwardin, backwardout);
    printf("���� ��ȯ: %s\n", backwardout);
}