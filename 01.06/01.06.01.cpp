#include <cstdio>

int n, m, a[100], ans, i;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for (i = 0; i < n; i++)
		if (a[i] == m)
			ans++;
	printf("%d\n", ans);
	return 0;
}
