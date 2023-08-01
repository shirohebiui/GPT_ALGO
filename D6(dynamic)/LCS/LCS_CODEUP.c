#include <stdio.h>
#include <string.h>
#define MAX 1001

int main() {
    int arr[MAX+1][MAX+1] = {0, };
    char base[MAX], cmp[MAX];
    scanf("%s", base);
    scanf("%s", cmp);
    int x = strlen(base);
    int y = strlen(cmp);

    for(int i=1; i<=y; i++) {
        for(int j=1; j<=x; j++) {
            if(base[j-1] == cmp[i-1]) {
                arr[i][j] = arr[i-1][j-1] + 1;
            } else {
                arr[i][j] = arr[i-1][j]>arr[i][j-1]?arr[i-1][j]:arr[i][j-1];
            }
        }
    }
    printf("%d\n", arr[y][x]);

    return 0;
}