#include <cstdio>

int n, a[47] = {0, 1, 1}, i;

int main() {
	scanf("%d", &n);
	for (i = 3; i <= n; i++)
		a[i] = a[i - 1] + a[i - 2];
	printf("%d\n", a[n]);
	return 0;
}
