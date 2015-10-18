#include <cstdio>

int n, a1, a2, a3, a4, a5, i, j, t2, t3, t4, t5;

int main() {
	scanf("%d%d%d%d%d%d", &n, &a1, &a2, &a3, &a4, &a5);
	n *= 100;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++) {
			t2 = i - a1 * j;
			if (t2 <= 0 || j == t2)
				continue;
			t3 = i - a2 * t2;
			if (t3 <= 0 || j == t3 || t2 == t3)
				continue;
			t4 = i - a3 * t3;
			if (t4 <= 0 || j == t4 || t2 == t4 || t3 == t4)
				continue;
			t5 = i - a4 * t4;
			if (t5 > 0 && j != t5 && t2 != t5 && t3 != t5 && t4 != t5 && a5 * t5 + j == i) {
				printf("%d %d %d %d %d %d\n", i, j, t2, t3, t4, t5);
				return 0;
			}
		}
	printf("not found\n");
	return 0;
}
