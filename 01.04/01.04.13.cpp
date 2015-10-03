#include <cstdio>

double a;

int main() {
	scanf("%lf", &a);
	if (a < 5)
		printf("%.3lf\n", -a + 2.5);
	else if (a < 10)
		printf("%.3lf\n", 2 - 1.5 * (a - 3) * (a - 3));
	else
		printf("%.3lf\n", a / 2 - 1.5);
	return 0;
}
