#include <stdio.h>
#include <string.h>

/* ����򵥵Ľṹ */
// ÿ��������Ҫ8�ֽ� ��Ӧÿ����������true false ״̬�˷ѿռ�
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

// ����λ��ṹ
struct {
    unsigned int widthValidated:1;
    unsigned int heightValidated:1;
} status;


int main(){
    printf("memory size occupied by status1: %d \n", sizeof(status1));
    printf("memory size occupied by status: %d \n", sizeof(status));

}