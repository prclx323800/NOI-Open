#include <cstdio>
#include <cmath>

int a, b, c;

int main() {
	scanf("%d%d", &a, &b);
	c = ceil(20000.0 / (3.14159 * a * b * b));
	printf("%d\n", c);
	return 0;
}
