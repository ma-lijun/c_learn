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
} book= {"python web ����", "mark", "1������", 101};

// todo �ṹ�������ʼ�� ����ʹ�ô˷���������ɸ�ֵ�� ���뱨��
//book = {"python web ����", "mark", "1������", 101};

int main(){
//    book = {"python web ����", "mark", "1������", 1026}
    printf("book title:%s, author:%s, subject:%s, book_id:%d", book.title, book.author, book.subject, book.book_id);
    return 0;
}