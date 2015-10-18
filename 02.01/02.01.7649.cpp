#include <cstdio>

int n, i, t;

int main() {
	scanf("%d", &n);
	for (i = 1;; i++) {
		t += i;
		if (t > n && (t - n) % 2 == 0) {
			printf("%d %d", (t - n) / 2, i);
			return 0;
		}
	}
}
