#include <stdio.h>
#include <string.h>

// C ���԰����е��豸�������ļ��������豸��������ʾ�����������ķ�ʽ���ļ���ͬ�����������ļ����ڳ���ִ��ʱ�Զ��򿪣��Ա���ʼ��̺���Ļ��

//��׼�ļ�  �ļ�ָ�� �豸
// ��׼���� stdin ����
// ��׼��� stdout ��Ļ
// ��׼���� stderr ��Ļ


//getchar() & putchar() ����
//int getchar(void) ��������Ļ��ȡ��һ�����õ��ַ�������������Ϊһ�����������������ͬһ��ʱ����ֻ���ȡһ����һ���ַ�����������ѭ����ʹ������������Ա����Ļ�϶�ȡ����ַ���
//
//int putchar(int c) �������ַ��������Ļ�ϣ���������ͬ���ַ������������ͬһ��ʱ����ֻ�����һ����һ���ַ�����������ѭ����ʹ������������Ա�����Ļ���������ַ���

int main(){
    int c;


    printf("enter a value:");
    c = getchar();

    printf("\n you entered:");
    putchar(c);
    printf("\n");

    // scanf()  printf()
       char str[100];
   int i;

   printf( "Enter a value :");
   scanf("%s %d", str, &i);

   printf( "\nYou entered: %s %d ", str, i);
   printf("\n");
    return 0;
}