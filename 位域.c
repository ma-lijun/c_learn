#include <stdio.h>
#include <string.h>

/* 定义简单的结构 */
// 每个变量需要8字节 对应每个变量保存true false 状态浪费空间
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

// 定义位域结构
struct {
    unsigned int widthValidated:1;
    unsigned int heightValidated:1;
} status;


int main(){
    printf("memory size occupied by status1: %d \n", sizeof(status1));
    printf("memory size occupied by status: %d \n", sizeof(status));

}