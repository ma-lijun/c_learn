#include <stdio.h>


// 定义常量有两种方式
// 1. 使用 #define 预处理器
// 用法： #define identifier value
// #define LENGTH 10

// 2. 使用const 关键字(必须在一个语句内完成声明+赋值)
// 用法： const type variable = value;
// 例子： const int var = 5;

int const_fun(){
    const int LEN = 10;
    const int WID = 5;
    const int NEWL = '\n';

    int ar ;
    ar = LEN * WID;
    printf("const function value of ar:%d ", ar);
    //	printf("%c", NEWL);
}

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(void){
    int area;

    area = LENGTH * WIDTH;

	printf("value of area:%d", area);
	printf("%c", NEWLINE);

	printf("const 常量使用方法：", NEWLINE);
	const_fun();

}