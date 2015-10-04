#include <cstdio>

int n, a, ans = 1, i;

int main() {
	scanf("%d%d", &a, &n);
	for (i = 1; i <= n; i++)
		ans *= a;
	printf("%d\n", ans);
	return 0;
}
