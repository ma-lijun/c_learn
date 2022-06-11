#include <stdio.h>

//


int main(){
    int var = 20;   /* 声明变量并赋值 */
    int *ip;        /* 指针变量声明 */

    ip = &var;      /* 指针变量赋值 */

    printf("var 变量的地址： %p\n", &var);
    printf("var 变量的地址： %p\n", ip);
    printf("var 变量的值 ： %p\n", var);
    printf("var 变量的值 ： %p\n", *ip);
    return 0;

}