#include <stdio.h>

void print_n_to_100(int n) {
    if(n<=100) {
    printf("%d ", n);
    print_n_to_100(n+1);
    }
}

void print_n_to_1(n) {
    if(n>0) {
        printf("%d ", n);
        print_n_to_1(n-1);
    }
}

void print_n_to_100_even(int n) {   
    if(n%2 == 0)
        printf("%d ", n);
    if(n<=100) {
        print_n_to_100_even(n+1);
    }
}

void print_n_to_100_odd(int n) {
    if(n%2 != 0)
        printf("%d ", n);
    if(n<=100) {
        print_n_to_100_odd(n+1);
    }
}

int main()
{
    printf("1~100\n");
    print_n_to_100(1);
    printf("\n\n");

    printf("100~1\n");
    print_n_to_1(100);
    printf("\n\n");

    printf("1~100 even\n");
    print_n_to_100_even(1);
    printf("\n\n");

    printf("1~100 odd\n");
    print_n_to_100_odd(1);
    printf("\n");
    
    return 0;
}