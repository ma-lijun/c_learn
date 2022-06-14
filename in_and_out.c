#include <stdio.h>
#include <string.h>

// C 语言把所有的设备都当作文件。所以设备（比如显示器）被处理的方式与文件相同。以下三个文件会在程序执行时自动打开，以便访问键盘和屏幕。

//标准文件  文件指针 设备
// 标准输入 stdin 键盘
// 标准输出 stdout 屏幕
// 标准错误 stderr 屏幕


//getchar() & putchar() 函数
//int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数。这个函数在同一个时间内只会读取一个单一的字符。您可以在循环内使用这个方法，以便从屏幕上读取多个字符。
//
//int putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符。这个函数在同一个时间内只会输出一个单一的字符。您可以在循环内使用这个方法，以便在屏幕上输出多个字符。

int main(){
    int c;


    printf("enter a value:");
    c = getchar();

    printf("\n you entered:");
    putchar(c);
    printf("\n");
    return 0;
}