#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	printf("int 存储大小为： %lu \n", sizeof(int));
	printf("float 最小值：%E \n", FLT_MIN);
	printf("float 最大值：%E \n", FLT_MAX);
	printf("精度值：%d \n", FLT_DIG);
	return 0;
}