#include <cstdio>

int a, b;
double c;

int main() {
	scanf("%d%d", &a, &b);
	c = 1.0 * a / b;
	printf("%.9lf\n", c);
	return 0;
}
