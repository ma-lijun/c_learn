#include <stdio.h>
#include <limits.h>
#include <float.h>

// 函数外定义变量x 和 y
int x;
int y;


int addwonum(){
    /*
    int a; 变量声明， 同时建立存储空间
    extern int a ; 不需要建立存储空间， 声明变量名， 可以在别的文件中定义
    */
    // 函数内生命变量 x 和 y 为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量） x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}

int main(){
    int result;
    // 调用函数 addwonum
    result = addwonum();
	printf("result wei :%d", result);

}