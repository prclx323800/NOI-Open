#include <cstdio>

int n, ans = 1, i, j;
bool a[104730];

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		do {
			ans++;
		} while (a[ans]);
		for (j = ans * 2; j <= 104729; j += ans)
			a[j] = true;
	}
	printf("%d\n", ans);
	return 0;
}
