#include <stdio.h>

// ��������
//sizeof() ���ر�����С  (��ռ�ֽ���)
// & ���ر�����ַ        &a ������������ʵ�ʵ�ַ
// * ����һ������        *a ָ��һ������        (�˴�������д���ͷ��)
// :? �������ʽ         �������Ϊ��?��ֵΪx:����ֵΪy


int main(){
    int a = 4;
    short b;
    double c;
    int* ptr;

    /* sizeof �����ʾ�� */
    printf("line1 ����a�Ĵ�С %lu \n", sizeof(a));
    printf("line2 ����b�Ĵ�С %lu \n", sizeof(b));
    printf("line3 ����c�Ĵ�С %lu \n", sizeof(c));

    /* & / * �����ʵ�� */
    ptr = &a; /* 'ptr' ���ڰ��� 'a' �ĵ�ַ */
    printf("a�ĵ�ַ %d \n", ptr);

}