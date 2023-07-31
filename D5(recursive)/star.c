#include <stdio.h>

void star(int N) {
    printf("*");
    if(N>1) 
        star(N-1);
}

int main()
{
    star(5);
    printf("\n");
    return 0;
}