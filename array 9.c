#include <stdio.h>

int main() {
    int arr[5], n, i, temp;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}