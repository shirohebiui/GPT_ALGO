//https://codeup.kr/problem.php?id=1099

#include <stdio.h>
#define MAX 10

int arr[MAX][MAX] = {0, };

void input_map() {
    int i, j;
    for(i=0; i<MAX; i++) {
        for(j=0; j<MAX; j++) {
            scanf(" %d", &arr[i][j]);
        }
    }
}

void print_map() {
    int i, j;
    for(i=0; i<MAX; i++) {
        for(j=0; j<MAX; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    input_map();

    //ant start (2,2)
    int y = 1, x = 1;
    if(arr[y][x] == 2)
        arr[y][x] = 9;
    else
    while(1) {
        arr[y][x] = 9;
        if(arr[y][x+1] == 0) {
            x++;
        } else if(arr[y+1][x] == 0) {
            y++;
        } else if(arr[y][x+1] == 2) {
            arr[y][x+1] = 9;
            break;
        } else if(arr[y+1][x] == 2) {
            arr[y+1][x] = 9;
            break;
        } else {
            break;
        }
    }
    
    print_map();
    return 0;
}