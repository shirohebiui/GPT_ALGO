#include <stdio.h>
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
    int N;
    scanf("%d", &N);

    long result;
    result = re_factorial(N);

    printf("%ld\n", result);
    return 0;
}