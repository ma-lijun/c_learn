#include <stdio.h>


// ���峣�������ַ�ʽ
// 1. ʹ�� #define Ԥ������
// �÷��� #define identifier value
// #define LENGTH 10

// 2. ʹ��const �ؼ���(������һ��������������+��ֵ)
// �÷��� const type variable = value;
// ���ӣ� const int var = 5;

int const_fun(){
    const int LEN = 10;
    const int WID = 5;
    const int NEWL = '\n';

    int ar ;
    ar = LEN * WID;
    printf("const function value of ar:%d ", ar);
    //	printf("%c", NEWL);
}

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(void){
    int area;

    area = LENGTH * WIDTH;

	printf("value of area:%d", area);
	printf("%c", NEWLINE);

	printf("const ����ʹ�÷�����", NEWLINE);
	const_fun();

}