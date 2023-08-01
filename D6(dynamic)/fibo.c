#include <stdio.h>
#define MAX 10000
int arr[MAX];

int main() {
    arr[1] = 1;
    arr[2] = 1;
    for(int i=3; i < MAX; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    //대충 이런식
    return 0;
}