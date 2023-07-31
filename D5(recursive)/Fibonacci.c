#include <stdio.h>

long dest;

long fibo(long N) {
    if(N==1 || N==2)
        return 1;
    return fibo(N-1) + fibo(N-2);
}

void fibo_v2(long prev, long now, long depth) {
    if(depth) {
        fibo_v2(now, prev+now, depth-1);
    } else {
        dest = now;
    }
}
int main() {
    long N;
    scanf("%ld", &N);
    /* if(N>2) {
        long prev = 1, now = 1, sum = 0;
        long tmp;
        for(long i=0; i<N-2; i++) {
            tmp = now;
            now = prev+now;
            prev = tmp;
        }
        prlongf("%d\n", now);
        return 0;
    }
    prlongf("1\n"); */
    long result;
    result = fibo(N);
    printf("%ld\n", result);

    fibo_v2(1,1,N-2);
    printf("%ld\n", dest);
    return 0;
}