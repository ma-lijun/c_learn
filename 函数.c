#include <stdio.h>

// ��������
int max(int x, int y);

int main(){

    // ����ֲ�����
    int x=5, y=8;
    int res;
    // �������� �� ��ֵ
    res = max(x, y);
    printf("���ֵΪ�� %d", res);

}

int max(int num1, int num2){
    // �ֲ����� result
    int result;

    if (num1>num2){
        result = num1;
    }
    else{
        result = num2;
    }
        return result;

}