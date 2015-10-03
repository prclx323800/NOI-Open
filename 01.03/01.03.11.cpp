#include <cstdio>

double a, b;

int main() {
	scanf("%lf%lf", &a, &b);
	printf("%g\n", a - b * (int)(a / b));
	return 0;
}
