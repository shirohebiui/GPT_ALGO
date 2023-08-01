#include <stdio.h>


int arr[] = {1,2,3};

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_arr(int size){  //값을 프린트 하기위한 함수
    for(int i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void permutation(int n, int r, int depth) {
    if(r==depth) {
        print_arr(depth);
        return;
    }
    for(int i=depth; i<n; i++) {
        swap(&arr[i], &arr[depth]);
        permutation(n, r, depth+1);
        swap(&arr[i], &arr[depth]);
    }
}

int main() {
    permutation(sizeof(arr)/sizeof(int) , 3, 0);
    return 0;
}