#include <cstdio>

int a, b, c, i = 2;

int main() {
	scanf("%d%d%d", &a, &b, &c);
	while (a % i != b % i || a % i != c % i)
		i++;
	printf("%d\n", i);
	return 0;
}
