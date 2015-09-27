#include <cstdio>

double r;
const double pi = 3.14159;

int main() {
	scanf("%lf", &r);
	printf("%.4lf %.4lf %.4lf\n", r * 2, r * pi * 2, r * r * pi);
	return 0;
}
