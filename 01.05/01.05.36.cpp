#include <cstdio>

int a, b, ans, i, t;

int main() {
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++) {
		t = i;
		while (t) {
			if (t % 10 == 2)
				ans++;
			t /= 10;
		}
	}
	printf("%d\n", ans);
	return 0;
}
