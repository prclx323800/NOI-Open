#include <cstdio>

int n, ans;
double s;

int main() {
	scanf("%d", &n);
	while (s <= n) {
		ans++;
		s += 1.0 / ans;
	}
	printf("%d\n", ans);
	return 0;
}
