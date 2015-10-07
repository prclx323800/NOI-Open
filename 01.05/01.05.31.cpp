#include <cstdio>

int n, ans, i, t = 1;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		t *= i;
		ans += t;
	}
	printf("%d\n", ans);
	return 0;
}
