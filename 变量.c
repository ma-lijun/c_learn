#include <stdio.h>
#include <limits.h>
#include <float.h>

// �����ⶨ�����x �� y
int x;
int y;


int addwonum(){
    /*
    int a; ���������� ͬʱ�����洢�ռ�
    extern int a ; ����Ҫ�����洢�ռ䣬 ������������ �����ڱ���ļ��ж���
    */
    // �������������� x �� y Ϊ�ⲿ����
    extern int x;
    extern int y;
    // ���ⲿ������ȫ�ֱ����� x �� y ��ֵ
    x = 1;
    y = 2;
    return x+y;
}

int main(){
    int result;
    // ���ú��� addwonum
    result = addwonum();
	printf("result wei :%d", result);

}