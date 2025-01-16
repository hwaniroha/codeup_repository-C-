#include <stdio.h>
int main(void) {
    int n = 0;
    scanf("%d", &n);
    int o = n;
    int arr[n + 500][n + 500];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if (i % 2 == 0) {
                arr[i][j] = o++;
            }
            else {
                arr[i][j] = o--;
            }
        }
        if (i % 2 == 0) {
            o = (o + n - 1);
        }
        else {
            o = (n * i + 1);
        }
    }

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}