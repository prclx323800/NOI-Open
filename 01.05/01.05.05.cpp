#include <cstdio>

int n, a, max, min, i;

int main() {
	scanf("%d%d", &n, &max);
	min = max;
	for (i = 2; i <= n; i++) {
		scanf("%d", &a);
		if (a > max)
			max = a;
		else if (a < min)
			min = a;
	}
	printf("%d\n", max - min);
	return 0;
}
