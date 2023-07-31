#include <stdio.h>

int sum_unit(int N) {
    if(N!=0) {
        /* int unit = N%10;
        return unit + sum_unit(N/10); */
        return N%10 + sum_unit(N/10)
    }
    return 0;
}

int main() {
    int N = 12345789;
    int result = sum_unit(N);
    printf("%d\n", result);
    return 0;
}