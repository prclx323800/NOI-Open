#include <cstdio>

int n, ans, i;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 10 == 1)
			ans++;
		if (i / 10 % 10 == 1)
			ans++;
		if (i / 100 % 10 == 1)
			ans++;
		if (i / 1000 % 10 == 1)
			ans++;
		if (i == 10000)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
