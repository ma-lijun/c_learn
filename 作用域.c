#include <stdio.h>

// ��������
// ȫ��������
// �ֲ�������
// �β�         �����Ĳ�������ʽ�������������ú����ڵľֲ������������ȫ�ֱ���ͬ�����ǻ�����ʹ�á�������һ��ʵ����


/* ȫ�ֱ������� */
int a = 20;

int main ()
{
  /* ���������еľֲ��������� */
  int a = 10;
  int b = 20;
  int c = 0;
  int sum(int, int);

  printf ("value of a in main() = %d\n",  a);
  c = sum( a, b);
  printf ("value of c in main() = %d\n",  c);

  return 0;
}

/* ������������ĺ��� */
int sum(int a, int b)
{
    printf ("value of a in sum() = %d\n",  a);
    printf ("value of b in sum() = %d\n",  b);

    return a + b;
}


//��ʼ���ֲ�������ȫ�ֱ���
//���ֲ�����������ʱ��ϵͳ��������ʼ�������������ж����ʼ��������ȫ�ֱ���ʱ��ϵͳ���Զ������ʼ����������ʾ��
// ȫ�ֱ����ĳ�ʼ��ֵ
// int 0; char '\0'; float 0; double 0; pointer NULL;