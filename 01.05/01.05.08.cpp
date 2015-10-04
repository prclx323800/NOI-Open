#include <cstdio>

int a, b, ans, i;

int main() {
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++)
		if (i % 17 == 0)
			ans += i;
	printf("%d\n", ans);
	return 0;
}
