#include <stdio.h>

extern int count;

void writer_extern(){
    printf("count is %d \n", count);
}