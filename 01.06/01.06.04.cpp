#include <cstdio>

int n, a[100], i;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d", a[n - 1]);
	for (i = n - 2; i >= 0; i--)
		printf(" %d", a[i]);
	printf("\n");
	return 0;
}
