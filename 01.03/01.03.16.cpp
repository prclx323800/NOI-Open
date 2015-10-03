#include <cstdio>
#include <cmath>

double a, b, c, d;

int main() {
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	printf("%.3lf\n", sqrt((c - a) * (c - a) + (d - b) * (d - b)));
	return 0;
}
