#include <stdio.h>
#include <string.h>

// todo �ṹ���Զ���ṹģ��
// C ����������ɴ洢��ͬ����������ı������ṹ�� C �������һ���û��Զ���Ŀ��õ��������ͣ����������洢��ͬ���͵������

// struct tag {
//    member-list
//    member-list
//    member-list
//    ...
//} variable-list ;

// ���� ����ṹ�壨Books�� + �����ṹ����� book
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;


int main(){
    // �ṹ�������ֵ
    strcpy(book.title, "python web");
    strcpy(book.author, "mark");
    strcpy(book.subject, "7������");
    book.book_id =  1026;
    printf("book title:%s, author:%s, subject:%s, book_id:%d", book.title, book.author, book.subject, book.book_id);
    return 0;
}