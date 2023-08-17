#include <stdio.h>

/*
저장을 안함으로써 연산만 하여 처리속도를 높힘
메모리에 저장하는거자체가 굉장히 cpu 비 친화적이다.
최종적으로 여러번 fibo의 값을 search할 경우에는 메모이제이션이 나을듯 싶으나
단일 큰 수를 처리할땐 이게 나을듯 하다.
*/
int main() {
    int N;
    printf("input N : ");
    scanf("%d", &N);
    if(N>2) {
        long prev = 1, now = 1, sum = 0;
        long tmp;
        for(long i=0; i<N-2; i++) {
            tmp = now;
            now = prev+now;
            prev = tmp;
        }
        printf("%ld\n", now);
        return 0;
    }
    printf("1\n");
    return 0;
}