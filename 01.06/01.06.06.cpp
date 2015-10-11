#include <cstdio>

int n, m, ans, i, j, t1, t2;
bool a[10001];

int main() {
	scanf("%d%d", &n, &m);
	for (i = 1; i <= m; i++) {
		scanf("%d%d", &t1, &t2);
		for (j = t1; j <= t2; j++)
			a[j] = true;
	}
	for (i = 0; i <= n; i++)
		if (!a[i])
			ans++;
	printf("%d\n", ans);
	return 0;
}
