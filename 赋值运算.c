#include <stdio.h>

//赋值运算 = += -= *= /= %= <<= >>= &= ^=
// |= (按位或且赋值运算符)


int main(){
    int a = 21;
    int c;

    c = a;
    printf("line 1 c = is %d \n", c);

    c += a;
    printf("line 2 c += is %d \n", c);

        c -= a;
    printf("line 3 c -= is %d \n", c);

        c *= a;
    printf("line 4 c *= is %d \n", c);

        c /= a;
    printf("line 5 c /= is %d \n", c);

    c %= a;
    printf("line 6 c %= is %d \n", c);

    c = 200;
    c <<= 2;
    printf("line 7 c <<= is %d \n", c);

    c >>= 2;
    printf("line 8 c >>= is %d \n", c);

    c &= 2;
    printf("line 9 c &= is %d \n", c);

    c |= 2;
    printf("line 10 c |= is %d \n", c);

    c ^= 2;
    printf("line 11 c ^= is %d \n", c);
}