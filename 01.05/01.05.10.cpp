#include <cstdio>

int n, a, ans, i, t;

int main() {
	scanf("%d%d", &n, &a);
	for (i = 1; i <= n; i++) {
		scanf("%d", &t);
		if (t == a)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
