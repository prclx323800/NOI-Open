#include <cstdio>

int n, a, sum, i;
double ans;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		sum += a;
	}
	ans = 1.0 * sum / n;
	printf("%d %.5lf\n", sum, ans);
	return 0;
}
