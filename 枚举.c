#include <stdio.h>

// if  ；if else； if else if； switch
// switch 允许测试一个变量多个值时候的情况


int main(){
    // 1 变量声明
    int num;

    printf("输入一个数字： ");
    // 2 获取变量地址 并 赋值
    scanf("%d", &num);

    (num%2==0)?printf("偶数"):printf("奇数");
}