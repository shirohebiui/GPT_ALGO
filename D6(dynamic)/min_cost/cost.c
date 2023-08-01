#include <stdio.h>
#define MAX 100
int arr[MAX][MAX] =
{
    {1,3,2},
    {4,6,2},
    {1,2,4}
};

int search_min(int y, int x) {
    int min;
    //matrix가 커질경우 대부분 y,x > 0 이므로 조건 확인을 최소화 하기 위한 서순
    if(y>0 && x>0)  { //y,x
        min = arr[y-1][x] > arr[y-1][x-1] ? arr[y-1][x-1] : arr[y-1][x];
        min = min > arr[y][x-1] ? arr[y][x-1] : min;
    } else if(x>0) { //y,0
        min = arr[y-1][x];
    } else if(y>0) { // 0,x
        min = arr[y][x-1];
    } else {  // 0,0
        min = 0;
    }
    return min;
}
int main() {
    int max_y = 3, max_x = 3;
    for(int y=0; y<max_y; y++) {
        for(int x=0; x<max_x; x++) {
            //올수있는 경우의 수
            arr[y][x] += search_min(y,x);
        }
    }

    for(int y=0; y<max_y; y++) {
        for(int x=0; x<max_x; x++) {
            printf("%2d ", arr[y][x]);
        }
        printf("\n");
    }
    return 0;
}