#include <cstdio>

int n, i;
double a, ans;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%lf", &a);
		ans += a;
	}
	printf("%.4lf\n", ans / n);
	return 0;
}
