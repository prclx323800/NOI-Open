#include <cstdio>

int n, a, ans, i, t;

int main() {
	scanf("%d%d", &a, &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &t);
		if (a >= t)
			a -= t;
		else
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
