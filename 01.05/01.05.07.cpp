#include <cstdio>

int a, b;

int main() {
	scanf("%d%d", &a, &b);
	if (a % 2 == 0)
		a++;
	if (b % 2 == 0)
		b--;
	printf("%d\n", (a + b) * ((b - a) / 2 + 1) / 2);
	return 0;
}
