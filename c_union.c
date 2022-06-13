#include <stdio.h>
#include <string.h>

// 共用体
//共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。共用体提供了一种使用相同的内存位置的有效方式。

// 关键字 union

// 定义方法
union Data {
    int i;
    float f;
    char s[20];
};


int main(){

    // 声明结构体变量
    union Data data;

    // 赋值
    data.i = 10;
        printf("data i:%d \n ", data.i);

    data.f = 12.36;
        printf("data f:%f,\n  ", data.f);

    strcpy(data.s, "c programming \n");

    // 访问
    printf("data i:%d , f:%f, s:%s,\n ", data.i,data.f, data.s);

    return 0;
}

