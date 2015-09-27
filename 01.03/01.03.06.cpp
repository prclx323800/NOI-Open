#include <cstdio>

int a, b;
double c;

int main() {
	scanf("%d%d", &a, &b);
	c = 100.0 * b / a;
	printf("%.3lf%%\n", c);
	return 0;
}
