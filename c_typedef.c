#include <stdio.h>
#include <string.h>

/* ʹ��typedef �����û��Զ����������ͣ�Ȼ��ʹ�����������������Ͷ���ṹ���� */

typedef struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

//typedef vs #define
//#define �� C ָ�����Ϊ�����������Ͷ���������� typedef ���ƣ��������������¼��㲻ͬ��
//
//typedef ������Ϊ���Ͷ���������ƣ�#define ��������Ϊ���Ͷ��������Ҳ��Ϊ��ֵ������������������Զ��� 1 Ϊ ONE��
//typedef ���ɱ�����ִ�н��͵ģ�#define �������Ԥ���������д���ġ�

int main(){

    Book book;

    strcpy(book.title, "c programing");
    strcpy(book.author, "ma");
    strcpy(book.subject, "�������");
    book.book_id = 12345;

    printf("title ��%s \n", book.title);
    printf("author ��%s \n", book.author);
    printf("subject ��%s \n", book.subject);
    printf("book_id ��%d \n", book.book_id);

    // define
    #define TURE 1
    #define FALSE 0
    #define two 2
            printf("TURE VALUE IS ��%d \n", TURE);
            printf("two VALUE IS ��%d \n", two);

    return 0;
}