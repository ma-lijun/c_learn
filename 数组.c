#include <stdio.h>

// ��������  type arrayName[arraySize] , ���ӣ� double balance[10];

// �����ʼ�� �� C �У������������ʼ�����飬Ҳ����ʹ��һ����ʼ�����
// double balance[5] = {200.0,6.25,3.4,8.7,10.0};

// ʡ�������С
//double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};

// ����Ԫ�صĸ�ֵ
// balance[4] = 50.0

// ����Ԫ�ط���
//double salary = balance[3];

int main(){
    // ��������
    int arr[10];
    int i, j;

    // ���鸳ֵ
    for (i=0; i<10; i++){
        arr[i] = 100 + i;
    }

    // �������
    for (j=0; j<10; j++){
        printf("�� %d ��Ԫ��ֵΪ ��%d \n", j, arr[j]);
    }
    return 0;
}