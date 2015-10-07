#include <cstdio>

int n, i;
double ans = 1, t = 1;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		t *= i;
		ans += 1 / t;
	}
	printf("%.10lf\n", ans);
	return 0;
}
