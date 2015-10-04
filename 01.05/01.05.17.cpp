#include <cstdio>

int i;
double a, ans;

int main() {
	scanf("%lf", &a);
	ans = a;
	for (i = 2; i <= 10; i++) {
		ans += a;
		a /= 2;
	}
	printf("%g\n%g\n", ans, a / 2);
	return 0;
}
