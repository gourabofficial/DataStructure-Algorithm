#include <stdio.h>

int main() {
    int a[3][3] = {{2,3,1}, {4,0,2}, {3,1,5}};
    int b[3][3] = {{1,2,0}, {4,1,3}, {4,2,1}};
    int c[3][3];
    
    int i, j, k;
    
    // Matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Display the result matrix
    printf("Resultant Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

