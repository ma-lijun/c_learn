#include <stdio.h>

// �洢�ඨ�����/�����ķ�Χ���ɼ��ԣ����������ڡ�˵������������������֮ǰ��c�Ĵ洢���У�
// auto      �ֲ�����Ĭ�ϵĴ洢��
//{
//    int mount;
//    auto int mount;
//}
// register  ����洢�ڼĴ���������RAM�еľֲ������� ����ζ�ű��������ߴ���ڼĴ�����С�����Ҳ��ܶ���ʹ��һԪ��&���������������Ϊ��û���ڴ�λ�ã�
//{
//    register int miles;
//}
// static

/*��������*/
void fun1(void);

/*ȫ�ֱ��� static ��Ĭ�ϵ�*/
static int count=10;  


int main(void){
	
	while(count--){
        // each undeclared identifier is reported only once for each function it appears in
        // printf("main while ����fun1�е� thingy ������%d\n",thingy);
		fun1();
	}
	return 0;
}

void fun1(){
	/* 'thingy' �� 'func1' �ľֲ����� - ֻ��ʼ��һ��
	 * ÿ�ε��ú��� 'func1' 'thingy' ֵ���ᱻ���á�
	 */   
	static int thingy = 5;
	thingy ++;
	printf("thingy is %d, count is %d \n", thingy, count);
}

// extern
