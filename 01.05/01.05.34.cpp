#include <cstdio>

int n, ans, i;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		if (i % 7 && i % 10 != 7 && i / 10 % 10 != 7)
			ans += i * i;
	printf("%d\n", ans);
	return 0;
}
