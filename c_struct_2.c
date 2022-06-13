#include <stdio.h>
#include <string.h>

// todo 结构体自定义结构模型
// C 数组允许定义可存储相同类型数据项的变量，结构是 C 编程中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。

// struct tag {
//    member-list
//    member-list
//    member-list
//    ...
//} variable-list ;

// 例子 定义结构体（Books） + 声明结构体变量 book
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;


int main(){
    // 结构体变量赋值
    strcpy(book.title, "python web");
    strcpy(book.author, "mark");
    strcpy(book.subject, "7天入门");
    book.book_id =  1026;
    printf("book title:%s, author:%s, subject:%s, book_id:%d", book.title, book.author, book.subject, book.book_id);
    return 0;
}