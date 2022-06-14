#include <stdio.h>

/* 位域的赋值与使用 位域变量名.位域名 或 位域变量名->位域名 */

int main(){
    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    } bit, *pbit;
    // 位域赋值不能超过允许范围
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;

    printf("%d , %d, %d, \n", bit.a, bit.b, bit.c);

    pbit = &bit;
    pbit->a = 0; /* 指针方式给位域赋值 */
    // &= 相当于 pbit->b = pbit -> b&3 位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3）
    pbit->b &=3;
    // 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15
    pbit->c |= 1;

    // 指针方式输出三个值
    printf("%d, %d, %d \n", pbit->a, pbit->b, pbit->c);
    return 0;
}