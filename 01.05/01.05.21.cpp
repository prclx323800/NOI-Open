#include <cstdio>

int n, max, c, i, t1, t2;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d%d", &t1, &t2);
		if (t1 >= 90 && t1 <= 140 && t2 >= 60 && t2 <= 90) {
			c++;
			if (c > max)
				max = c;
		} else
			c = 0;
	}
	printf("%d\n", max);
	return 0;
}
