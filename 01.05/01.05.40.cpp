#include <cstdio>

int n, ans, i, j, t;

int main() {
	scanf("%d", &n);
	while (t < n) {
		i++;
		for (j = 1; j <= i && t < n; j++, t++)
			ans += i;
	}
	printf("%d\n", ans);
	return 0;
}
