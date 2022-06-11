#include <stdio.h>

// 算术运算符 + - * / % ++ --
// 关系运算符 == != > < >= <=
// 逻辑运算符 && || !
// 位运算符   & 按位与  | 按位或 ^ 异或运算 相同为0 不同得1   ~ 取反运算  << 二进制左移  >> 二进制右移
int main(){
    unsigned int a = 60;  /* 60 = 0011 1100 */
    unsigned int b = 13;  /* 13 = 0000 1101 */

    int c = 0;

    c = a & b;  /* 12 0000 1100 */
    printf("line 1 -c is :%d \n",c);

    c = a | b;  /* 61 0011 1101 */
    printf("line 2 -c is :%d \n",c);

    c = a ^ b; /* 49 0011 0001 */
    printf("line 3 -c is :%d \n",c);

    c = ~a;  /* -67 1100 0011  */
    printf("line 4 -c is :%d \n",c);

    c = a>>2 ; /* 15 0000 1111 */
    printf("line 5 -c is :%d \n",c);

    c = a<<2; /* 240 1111 0000 */
    printf("line 6 -c is :%d \n",c);
}