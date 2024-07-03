#include <stdio.h>

int main() {

    int n, max;
    int table[10][10];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            table[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++) {
        table[i][0] = table[0][i] = 1;
    }

    max = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != 0 && j != 0) {
                table[i][j] = table[i - 1][j] + table[i][j - 1];
            }

            if(max < table[i][j]) {
                max = table[i][j];
            }
        }
    }

    printf("%d\n",max);


    return 0;
}