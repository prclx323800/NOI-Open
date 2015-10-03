#include <cstdio>
#include <cmath>

double a, b, c, d;

int main() {
	scanf("%lf%lf%lf", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		d = (a + b + c) / 2;
		printf("%.4lf\n", sqrt(d * (d - a) * (d - b) * (d - c)));
	} else
		printf("Data Error\n");
	return 0;
}
