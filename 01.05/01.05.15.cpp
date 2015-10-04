#include <cstdio>

int n, i, t1, t2;
double a, t3;

int main() {
	scanf("%d%d%d", &n, &t1, &t2);
	a = 1.0 * t2 / t1;
	for (i = 2; i <= n; i++) {
		scanf("%d%d", &t1, &t2);
		t3 = 1.0 * t2 / t1;
		if (t3 - a > 0.05)
			printf("better\n");
		else if (a - t3 > 0.05)
			printf("worse\n");
		else
			printf("same\n");
	}
	return 0;
}
