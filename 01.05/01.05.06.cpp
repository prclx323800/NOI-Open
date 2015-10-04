#include <cstdio>

int n, a, b, c, i, t1, t2, t3;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d%d%d", &t1, &t2, &t3);
		a += t1, b += t2, c += t3;
	}
	printf("%d %d %d %d\n", a, b, c, a + b + c);
	return 0;
}
