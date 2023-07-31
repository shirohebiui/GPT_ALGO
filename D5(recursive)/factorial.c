#include <stdio.h>

long factorial(int num)
{
    long result = 1;
    //for(int i = num; i>0; --i) //정순
    for (int i = 1; i <= num; ++i) //역순
    {
        result = result * i;
    }
    return result;
}

/*
5*4*3*2*1 *1
마지막에 *1을 리턴
*/
long re_factorial(int num) {
    if(num>1)
        return num * re_factorial(num-1);
    return 1;
}

int main() {
    int N = 10;
    long result;
    
    result = factorial(N);
    printf("%ld\n", result);

    result = re_factorial(N);
    printf("%ld\n", result);
    return 0;
}