#include <cstdio>

int a, c1, c2, i;

int main() {
	for (i = 1; i <= 12; i++) {
		scanf("%d", &a);
		c1 += 300;
		if (c1 < a) {
			printf("-%d\n", i);
			return 0;
		}
		c1 -= a;
		c2 += c1 / 100 * 100;
		c1 %= 100;
	}
	c1 += c2 * 1.2;
	printf("%d\n", c1);
	return 0;
}
