#include <cstdio>

int n, a[32] = {1, 1}, i, j;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = a[0]; j >= 1; j--) {
			a[j] *= 2;
			if (a[j] >= 10) {
				a[j + 1] += a[j] / 10;
				a[j] %= 10;
				if (j + 1 > a[0])
					a[0] = j + 1;
			}
		}
	for (i = a[0]; i >= 1; i--)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}
