#include <cstdio>

int n, i;
float a, ans = 1, t = 1;

int main() {
	scanf("%f%d", &a, &n);
	for (i = 1; i <= n; i++) {
		t *= a;
		ans += t;
	}
	printf("%.2f\n", ans);
	return 0;
}
