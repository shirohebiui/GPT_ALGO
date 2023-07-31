#include <stdio.h>
int rear;

int sum_of_array(int *arr, int pos) {
    if(pos<rear)
        return arr[pos] + sum_of_array(arr, pos+1);
    else
        return 0;
}

int main()
{
    int arr[10] = {8,3,2,9};
    rear = 4;
    int sum = 0;
    sum = sum_of_array(arr, 0);
    printf("%d\n", sum);
    return 0;
}