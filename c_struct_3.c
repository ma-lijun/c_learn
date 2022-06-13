#include <stdio.h>
#include <string.h>

// 例子 定义结构体（Books）
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

//void

int main(){

    // 声明结构体变量
    struct Books book1;
    struct Books book2;

    // 结构体变量赋值
    strcpy(book1.title, "python web");
    strcpy(book1.author, "mark");
    strcpy(book1.subject, "7天入门");
    book1.book_id =  1026;

        // 结构体变量赋值
    strcpy(book2.title, "python web2");
    strcpy(book2.author, "mark2");
    strcpy(book2.subject, "7天入门2");
    book2.book_id =  10262;

    printf("book1 title:%s, author:%s, subject:%s, book_id:%d \n", book1.title, book1.author, book1.subject, book1.book_id);
    printf("book2 title:%s, author:%s, subject:%s, book_id:%d \n", book2.title, book2.author, book2.subject, book2.book_id);
    return 0;
}