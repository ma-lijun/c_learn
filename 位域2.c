#include <stdio.h>

/* λ��ĸ�ֵ��ʹ�� λ�������.λ���� �� λ�������->λ���� */

int main(){
    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    } bit, *pbit;
    // λ��ֵ���ܳ�������Χ
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;

    printf("%d , %d, %d, \n", bit.a, bit.b, bit.c);

    pbit = &bit;
    pbit->a = 0; /* ָ�뷽ʽ��λ��ֵ */
    // &= �൱�� pbit->b = pbit -> b&3 λ�� b ��ԭ��ֵΪ 7���� 3 ����λ������Ľ��Ϊ 3��111&011=011��ʮ����ֵΪ 3��
    pbit->b &=3;
    // ʹ���˸���λ�����"|="���൱�ڣ�pbit->c=pbit->c|1������Ϊ 15
    pbit->c |= 1;

    // ָ�뷽ʽ�������ֵ
    printf("%d, %d, %d \n", pbit->a, pbit->b, pbit->c);
    return 0;
}