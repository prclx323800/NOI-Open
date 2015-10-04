#include <cstdio>
#include <cmath>

int n, ans, i, t1;
double sum, t2, t3;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%lf%lf%d", &t2, &t3, &t1);
		sum += sqrt(t2 * t2 + t3 * t3) * 2 / 50 + 1.5 * t1;
	}
	ans = ceil(sum);
	printf("%d\n", ans);
	return 0;
}
