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

void print_book(struct Books *book);
struct Books  struct_book(char title[], char author[], char subject[], int book_id);

int main(){

    // 声明结构体变量
    struct Books book1;
    struct Books book2;

    // 结构体变量赋值
    strcpy(book2.title, "python web2");
    strcpy(book2.author, "mark2");
    strcpy(book2.subject, "7天入门2");
    book2.book_id =  10262;

    // todo 使用结构体类型函数为 赋值
    book1 = struct_book("python web", "mark", "7天入门", 1026);

    // todo 打印结构体（参数为结构体指针地址）
    print_book(&book1);
    print_book(&book2);
    return 0;
}

struct Books struct_book(char title[], char author[], char subject[], int book_id){

    struct Books book2;

    strcpy(book2.title, title);
    strcpy(book2.author, author);
    strcpy(book2.subject, subject);
    book2.book_id =  book_id;

    return book2;
}

void print_book(struct Books *book){
    printf("book1 title:%s ,\n author:%s,\n subject:%s,\n book_id:%d \n", book->title, book->author, book->subject, book->book_id);
}