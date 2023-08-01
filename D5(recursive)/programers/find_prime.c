#include <stdio.h>
#include <string.h>
#define MAX 10000000

int prime[MAX] = {0, };
char str[7];
int arr[7];
int sum = 0;

void Eratos() {
    for(int i=2; i*i<MAX; i++) {
        for(int j=i*i; j*i<MAX; j+=i) {
            if(prime[i*j] == 0)   //저장하는 연산을 여러번 하지 않기위해
                prime[i*j] = 1;
        }
    }
}

int IsVaild_Prime(int key) {
    if(prime[key] == 0)
        return 1;
    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void check(int size){  //값을 프린트 하기위한 함수
    int result;
    for(int i=0; i < size; i++) {
        result += arr[i]-48; //'0' == 48
        if(i<size-1)
            result *= 10;
    }
    if(IsVaild_Prime(result))
        sum++;
}

void permutation(int n, int r, int depth) {
    if(r==depth) {
        check(depth);
        return;
    }
    for(int i=depth; i<n; i++) {
        swap(&arr[i], &arr[depth]);
        permutation(n, r, depth+1);
        swap(&arr[i], &arr[depth]);
    }
}

int main() {
    Eratos();
    scanf("%s", str);
    for(int i=0; i<=strlen(str); i++)
        arr[]
    for(int i=0; i<=strlen(str); i++)
        permutation(strlen(str)/sizeof(int) , i, 0);
    return 0;
}