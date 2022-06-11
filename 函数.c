#include <stdio.h>

// 函数声明
int max(int x, int y);

int main(){

    // 定义局部变量
    int x=5, y=8;
    int res;
    // 函数调用 并 赋值
    res = max(x, y);
    printf("最大值为： %d", res);

}

int max(int num1, int num2){
    // 局部变量 result
    int result;

    if (num1>num2){
        result = num1;
    }
    else{
        result = num2;
    }
        return result;

}