#include <stdio.h>

// 杂项运算
//sizeof() 返回变量大小  (所占字节数)
// & 返回变量地址        &a 将给出变量的实际地址
// * 返回一个变量        *a 指向一个变量        (此处不理解有待回头看)
// :? 条件表达式         如果条件为真?则值为x:否则值为y


int main(){
    int a = 4;
    short b;
    double c;
    int* ptr;

    /* sizeof 运算符示例 */
    printf("line1 变量a的大小 %lu \n", sizeof(a));
    printf("line2 变量b的大小 %lu \n", sizeof(b));
    printf("line3 变量c的大小 %lu \n", sizeof(c));

    /* & / * 运算符实例 */
    ptr = &a; /* 'ptr' 现在包含 'a' 的地址 */
    printf("a的地址 %d \n", ptr);

}