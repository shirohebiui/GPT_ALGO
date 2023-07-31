#include <stdio.h>

long sum_unit(int N) {
    if(N!=0) {
        int unit = N%10;
        return unit + sum_unit(N/10);
    }
    return 0;
}

int main() {
    long N;
    scanf("%ld", &N);
    long result = sum_unit(N);
    printf("%ld\n", result);
    return 0;
}