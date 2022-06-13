#include <stdio.h>
#include <stdlib.h>

// �ص�����
void populate_array(int *array, int arraySize, int(*getNextValue)(void)){
    // �˴���arraySize Ӧ�û��б���δ��������
    for (int i = 0; i< arraySize;i++){
        array[i] = getNextValue();
    }
}

// ��ȡ���ֵ
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