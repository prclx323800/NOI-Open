#include <cstdio>
#include <cmath>

int a, b, c, d;

int main() {
	scanf("%d%d%d", &a, &b, &c);
	d = ceil(1.0 * c / b);
	printf("%d\n", d <= a ? a - d : 0);
	return 0;
}
