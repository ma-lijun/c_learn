#include <stdio.h>
#include <string.h>

// ������
//��������һ��������������ͣ�����������ͬ���ڴ�λ�ô洢��ͬ���������͡������Զ���һ�����ж��Ա�Ĺ����壬�����κ�ʱ��ֻ����һ����Ա����ֵ���������ṩ��һ��ʹ����ͬ���ڴ�λ�õ���Ч��ʽ��

// �ؼ��� union

// ���巽��
union Data {
    int i;
    float f;
    char s[20];
};


int main(){

    // �����ṹ�����
    union Data data;

    // ��ֵ
    data.i = 10;
        printf("data i:%d \n ", data.i);

    data.f = 12.36;
        printf("data f:%f,\n  ", data.f);

    strcpy(data.s, "c programming \n");

    // ����
    printf("data i:%d , f:%f, s:%s,\n ", data.i,data.f, data.s);

    return 0;
}

