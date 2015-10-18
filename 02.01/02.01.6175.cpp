#include <cstdio>

int n, a, b, ans;

int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d", &a, &b);
		ans = 1;
		while (a > b) {
			a -= b;
			ans++;
			a *= 2;
			b *= 1.05;
			if (a > 1000000)
				a = 1000000;
		}
		printf("%d\n", ans);
	}
	return 0;
} 
