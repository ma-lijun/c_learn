#include <stdio.h>

//  break 终止循环或switch语句， 程序流将继续执行
//  continue 跳过本次循环
//  goto   将控制转移到被标记的语句。建议尽量不用


int main(){
    // 一个死循环的例子
    // 按 Ctrl + C 键终止一个无限循环
    for(;;){
        printf("循环会永远执行下去！\n");

    }
    return 0;

}