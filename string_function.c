#include <stdio.h>
#include <string.h>

// c语言中字符串提供的几种常用方法
// strcpy(s1, s2)   复制s2到s1
// strcat(s1,s2)    连接字符串s2到s1的末尾
// strlen(s1)       返回字符串s1的长度
// strcmp(s1, s2)   比较字符串大小，若相同返回0， 如果 s1 < s2 则返回小于0， 如果s1 > s2 则返回大于0
// strchr(s1, ch)   返回一个指针；指向s1 中字符 ch 第一次出现的位置
// strstr(s1, s2)   返回一个指针；指向s1 中字符串 s2 第一次出现的位置



int main(){
    char s1[] = "hello world!";
    char s2[] = "world";
    char ch = 'o';
    printf("s1: %s, s2: %s\n", s1, s2);

    printf("strlen(s1): %d\n", strlen(s1));
    printf("s1: %s, s2: %s\n", s1, s2);

    printf("strcmp(s1,s2): %d\n", strcmp(s1,s2));
    printf("s1: %s, s2: %s\n", s1, s2);

    printf("strchr(s1,ch): %p\n", strchr(s1,ch));
    printf("s1: %s, s2: %s\n", s1, s2);

    printf("strstr(s1,s2): %p\n", strstr(s1,s2));
    printf("s1: %s, s2: %s\n", s1, s2);

    // 验证strchr、strstr 获取指针的方法
    for (int i=0; i<strlen(s1); i++){
        printf("arr 中的第%d元素: %c， 其内存地址为：%p\n", i+1, s1[i], &s1[i]);
    }

    // s1的值会变化（s1指针开始位置不变）
    printf("strcat(s1,s2): %s\n", strcat(s1,s2));
    printf("s1: %s, s2: %s\n", s1, s2);

    // s1 的值被s2覆盖（s1指针位开始置不变）
    printf("strcpy(s1,s2): %s\n", strcpy(s1,s2));
    printf("s1: %s, s2: %s\n", s1, s2);

    for (int i=0; i<strlen(s1); i++){
        printf("arr 中的第%d元素: %c， 其内存地址为：%p\n", i+1, s1[i], &s1[i]);
    }
    return 0;
}