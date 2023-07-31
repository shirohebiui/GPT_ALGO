#include <stdio.h>

/*
1 + 2 + ... + n + 0
마지막에 +0을 리턴
*/
int return_test(int n) {
    if(n<=100)
        return 1 + return_test(n+1);
    return 0;
}
int main()
{
    int sum = return_test(1);
    printf("%d\n", sum);
    return 0;
}