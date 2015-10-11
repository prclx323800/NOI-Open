#include <cstdio>

int n, a[1000], ans, i, t;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		ans += a[i] * t;
	}
	printf("%d\n", ans);
	return 0;
}
