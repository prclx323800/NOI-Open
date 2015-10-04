#include <cstdio>

int n, a, max, i;

int main() {
	scanf("%d%d", &n, &max);
	for (i = 2; i <= n; i++) {
		scanf("%d", &a);
		if (a > max)
			max = a;
	}
	printf("%d\n", max);
	return 0;
}
