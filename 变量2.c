#include <stdio.h>

// 声明（定义）并赋值两个全局变量
int x=1;
int y=2;
int addwonum();


int main(void){
    int result;
    // 调用函数 addwonum
    result = addwonum();
	printf("result wei :%d", result);
    return result;
}