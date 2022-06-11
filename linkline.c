# include<stdio.h>
typedef int Status; // status 是函数的类型，其值是函数结构状态码，如ok等

typedef int ElemType;

// 顺序表数据结构
typedef struct 
｛
	ElemType *elem;
	int lenght;
｝SqList;


