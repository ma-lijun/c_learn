#include <stdio.h>
#include <string.h>

// c�������ַ����ṩ�ļ��ֳ��÷���
// strcpy(s1, s2)   ����s2��s1
// strcat(s1,s2)    �����ַ���s2��s1��ĩβ
// strlen(s1)       �����ַ���s1�ĳ���
// strcmp(s1, s2)   �Ƚ��ַ�����С������ͬ����0�� ��� s1 < s2 �򷵻�С��0�� ���s1 > s2 �򷵻ش���0
// strchr(s1, ch)   ����һ��ָ�룻ָ��s1 ���ַ� ch ��һ�γ��ֵ�λ��
// strstr(s1, s2)   ����һ��ָ�룻ָ��s1 ���ַ��� s2 ��һ�γ��ֵ�λ��



int main(){
    char s1[] = "hello world!";
    char s2[] = "world";
    char ch = 'o';
    printf("s1: %s, s2: %s\n", s1, s2);

    printf("strlen(s1): %d\n", strlen(s1));
    printf("s1: %s, s2: %s\n", s1, s2);

    printf("strcmp(s1,s2): %d\n", strcmp(s1,s2));
    printf("s1: %s, s2: %s\n", s1, s2);

    printf("strchr(s1,ch): %p\n", strchr(s1,ch));
    printf("s1: %s, s2: %s\n", s1, s2);

    printf("strstr(s1,s2): %p\n", strstr(s1,s2));
    printf("s1: %s, s2: %s\n", s1, s2);

    // ��֤strchr��strstr ��ȡָ��ķ���
    for (int i=0; i<strlen(s1); i++){
        printf("arr �еĵ�%dԪ��: %c�� ���ڴ��ַΪ��%p\n", i+1, s1[i], &s1[i]);
    }

    // s1��ֵ��仯��s1ָ�뿪ʼλ�ò��䣩
    printf("strcat(s1,s2): %s\n", strcat(s1,s2));
    printf("s1: %s, s2: %s\n", s1, s2);

    // s1 ��ֵ��s2���ǣ�s1ָ��λ��ʼ�ò��䣩
    printf("strcpy(s1,s2): %s\n", strcpy(s1,s2));
    printf("s1: %s, s2: %s\n", s1, s2);

    for (int i=0; i<strlen(s1); i++){
        printf("arr �еĵ�%dԪ��: %c�� ���ڴ��ַΪ��%p\n", i+1, s1[i], &s1[i]);
    }
    return 0;
}