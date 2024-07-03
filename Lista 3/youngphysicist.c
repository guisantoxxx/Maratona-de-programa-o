#include <stdio.h>

int main() {

    int n;
    int matriz[100][3];
    int resultante_x, resultante_y, resultande_z;

    resultante_x = resultante_y = resultande_z = 0;
 
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            
            if(j == 0) {
                resultante_x += matriz[i][j];
            }
            else if(j == 1) {
                resultante_y += matriz[i][j];
            }
            else {
                resultande_z += matriz[i][j];
            }
        }
    }

    if(resultante_x == 0 && resultante_y == 0 && resultande_z == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }


    return 0;
}