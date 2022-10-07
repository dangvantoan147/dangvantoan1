#include<stdio.h>

int main() {
	int n, i;
	int arr[1000];
	int sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

	}
	for (i = 0; i < n; i++) {
		if (arr[i] % 2 !=0 && arr[i] > 0) {
			sum += arr[i];
			
		}
	}
	printf("%d", sum);
	return 0;
}
