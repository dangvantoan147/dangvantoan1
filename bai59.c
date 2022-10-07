#include<stdio.h>

int main() {
    int n, i;
    int arr[1000];
    scanf("%d", &n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < n; i++) {
    	int j;
        for ( j=i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // N?u arr[i] > arr[j] thì hoán d?i giá tr? c?a arr[i] và arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
