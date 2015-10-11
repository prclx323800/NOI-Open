#include <cstdio>

int a[10], b, ans, i;

int main() {
	for (i = 0; i <= 9; i++)
		scanf("%d", &a[i]);
	scanf("%d", &b);
	for (i = 0; i <= 9; i++)
		if (a[i] <= b + 30)
			ans++;
	printf("%d\n", ans);
	return 0;
}
