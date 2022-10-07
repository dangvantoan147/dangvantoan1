#include<stdio.h>

int main() {
	int arr[100][100];
	int n, m;

	scanf("%d%d", &n, &m);
	int i, j;
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;
	for (i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			if (arr[i][j] % 5 == 0) {
				sum += arr[i][j];
			}
		}
	}

	printf("%d", sum);

	return 0;
}
