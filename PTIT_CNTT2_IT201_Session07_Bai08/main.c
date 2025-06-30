#include <stdio.h>

int main(void) {
    int rows,cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    if (rows <= 0 || cols <=0) {
        printf("Invalid input\n");
        return 0;
    }
    int arr[rows][cols];
    printf("Enter elements: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int k;
    printf("Enter col index want sort: ");
    scanf("%d", &k);
    if (k < 0 || k>=cols) {
        printf("Invalid input\n");
        return 0;
    }
    k = k - 1;
    for (int i = 0; i < rows - 1; i++) {
        for (int j = i+1; j < rows; j++) {
            if (arr[i][k] > arr[j][k]) {
                int temp = arr[i][k];
                arr[i][k] = arr[j][k];
                arr[j][k] = temp;
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}