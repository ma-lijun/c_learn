#include <stdio.h>
#include <string.h>

// c�������ַ������ַ��б�

int main(){
    char arr[] = "hello world!";
    char arr2[13] = "hello world!";
    printf("arr: %s\n", arr);
    printf("arr2: %s\n", arr2);
    for (int i=0; i<strlen(arr); i++){
        printf("arr �еĵ�%dԪ��: %c\n", i+1, arr[i]);
    }
    return 0;
}