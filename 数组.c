#include <stdio.h>

// 数组声明  type arrayName[arraySize] , 例子： double balance[10];

// 数组初始化 在 C 中，您可以逐个初始化数组，也可以使用一个初始化语句
// double balance[5] = {200.0,6.25,3.4,8.7,10.0};

// 省略数组大小
//double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};

// 数组元素的赋值
// balance[4] = 50.0

// 数组元素访问
//double salary = balance[3];

int main(){
    // 数组声明
    int arr[10];
    int i, j;

    // 数组赋值
    for (i=0; i<10; i++){
        arr[i] = 100 + i;
    }

    // 数组遍历
    for (j=0; j<10; j++){
        printf("第 %d 个元素值为 ：%d \n", j, arr[j]);
    }
    return 0;
}