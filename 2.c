#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	printf("int �洢��СΪ�� %lu \n", sizeof(int));
	printf("float ��Сֵ��%E \n", FLT_MIN);
	printf("float ���ֵ��%E \n", FLT_MAX);
	printf("����ֵ��%d \n", FLT_DIG);
	return 0;
}