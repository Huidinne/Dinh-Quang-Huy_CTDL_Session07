#include <stdio.h>
int quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low -1;
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        int next = i + 1;
        quickSort(arr, low, next - 1);
        quickSort(arr, next + 1, high);
    }
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("So luong phan tu khong hop le");
        return 0;
    }
    int arr[n];
    printf("Nhap tung phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}