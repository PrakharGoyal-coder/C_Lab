#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }


    
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
           { printf("%d\t", a[i][j]);
           }
            printf("\n");
    }

    int found = 0;

 
    for (int i = 0; i < n; i++) {
        int min = a[i][0];
        int col = 0;

       
        for (int j = 1; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

       
        int is_saddle = 1;
        for (int k = 0; k < n; k++) {
            if (a[k][col] > min) {
                is_saddle = 0;
                break;
            }
        }

        if (is_saddle) {
            printf("Saddle point is %d at position (%d, %d)\n", min, i, col);
            found = 1;
        }
    }

    if (found==0)
        printf("No saddle point found.");

    return 0;
}
