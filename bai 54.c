#include<stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	int arr[1000];
	for ( i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d", &arr[0]) + arr[n-1];
	return 0;
	
}
