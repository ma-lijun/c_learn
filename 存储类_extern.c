#include <stdio.h>

int count ;
extern void writer_extern();

int main(){
    count = 5;
    writer_extern();
}