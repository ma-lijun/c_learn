#include <stdio.h>
#include <string.h>

/* 使用typedef 定义用户自定义数据类型，然后使用这个定义的数据类型定义结构变量 */

typedef struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

//typedef vs #define
//#define 是 C 指令，用于为各种数据类型定义别名，与 typedef 类似，但是它们有以下几点不同：
//
//typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
//typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。

int main(){

    Book book;

    strcpy(book.title, "c programing");
    strcpy(book.author, "ma");
    strcpy(book.subject, "编程语言");
    book.book_id = 12345;

    printf("title ：%s \n", book.title);
    printf("author ：%s \n", book.author);
    printf("subject ：%s \n", book.subject);
    printf("book_id ：%d \n", book.book_id);

    // define
    #define TURE 1
    #define FALSE 0
    #define two 2
            printf("TURE VALUE IS ：%d \n", TURE);
            printf("two VALUE IS ：%d \n", two);

    return 0;
}