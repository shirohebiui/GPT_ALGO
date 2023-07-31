#include <stdio.h>

void star(int N) {
    printf("*");
    if(N>1) 
        star(N-1);
}

int main()
{
    int N;
    scanf("%d", &N);
    star(N);
    printf("\n");
    return 0;
}