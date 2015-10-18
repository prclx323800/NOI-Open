#include <cstdio>

int n, k, a[1000], i, j;

int main() {
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i <= n - 2; i++)
		for (j = i + 1; j <= n; j++)
			if (a[i] + a[j] == k) {
				printf("yes\n");
				return 0;
			}
	printf("no\n");
	return 0;
}
