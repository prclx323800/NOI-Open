#include <cstdio>

int n, i;
double ans;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 2)
			ans += 1.0 / i;
		else
			ans -= 1.0 / i;
	}
	printf("%.4lf\n", ans);
	return 0;
}
