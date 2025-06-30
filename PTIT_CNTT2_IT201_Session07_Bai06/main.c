#include <stdio.h>
void merge( int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        }else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}
void merge_sort( int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort( arr, left, mid);
        merge_sort( arr, mid + 1, right);
        merge( arr, left, mid, right);
    }
}
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if ( n<= 0) {
        printf("So luong phan tu khong hop le");
        return 0;
    }
    int arr[n];
    printf("Nhap phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    merge_sort( arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}