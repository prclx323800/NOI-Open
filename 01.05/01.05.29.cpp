#include <cstdio>

int n, a[30] = {1}, b[30] = {2}, i;
double ans;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		if (i) {
			a[i] = b[i - 1];
			b[i] = a[i - 1] + b[i - 1];
		}
		ans += 1.0 * b[i] / a[i];
	}
	printf("%.4lf\n", ans);
	return 0;
}
