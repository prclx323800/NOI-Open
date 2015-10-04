#include <cstdio>

int n, a, i;
double ans;

int main() {
	scanf("%d%d", &a, &n);
	ans = a;
	for (i = 1; i <= n; i++)
		ans *= 1.001;
	printf("%.4lf\n", ans);
	return 0;
}
