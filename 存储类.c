#include <stdio.h>

// 存储类定义变量/函数的范围（可见性）和生命周期。说明符放在所修饰类型之前。c的存储类有：
// auto      局部变量默认的存储类
//{
//    int mount;
//    auto int mount;
//}
// register  定义存储在寄存器而不是RAM中的局部变量， 这意味着变量的最大尺寸等于寄存器大小，而且不能对它使用一元“&”（运算符）（因为它没有内存位置）
//{
//    register int miles;
//}
// static

/*函数声明*/
void fun1(void);

/*全局变量 static 是默认的*/
static int count=10;  


int main(void){
	
	while(count--){
        // each undeclared identifier is reported only once for each function it appears in
        // printf("main while 调用fun1中的 thingy 变量：%d\n",thingy);
		fun1();
	}
	return 0;
}

void fun1(){
	/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
	 * 每次调用函数 'func1' 'thingy' 值不会被重置。
	 */   
	static int thingy = 5;
	thingy ++;
	printf("thingy is %d, count is %d \n", thingy, count);
}

// extern
