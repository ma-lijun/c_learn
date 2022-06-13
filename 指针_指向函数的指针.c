#include <stdio.h>
#include <stdlib.h>

// 回调函数
void populate_array(int *array, int arraySize, int(*getNextValue)(void)){
    // 此处无arraySize 应该会有变量未定义错误吧
    for (int i = 0; i< arraySize;i++){
        array[i] = getNextValue();
    }
}

// 获取随机值
int getNextValue(void){
    return rand();
}

int main(void){
    int myarray[10] ;
    populate_array(myarray, 10, getNextValue);
    for(int i=0; i< 10; i++){
        printf("%d", myarray[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
}

//warning: implicit declaration of function 'populate_array' [-Wimplicit-function-declaration]