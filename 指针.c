#include <stdio.h>

//


int main(){
    int var = 20;   /* ������������ֵ */
    int *ip;        /* ָ��������� */

    ip = &var;      /* ָ�������ֵ */

    printf("var �����ĵ�ַ�� %p\n", &var);
    printf("var �����ĵ�ַ�� %p\n", ip);
    printf("var ������ֵ �� %p\n", var);
    printf("var ������ֵ �� %p\n", *ip);
    return 0;

}