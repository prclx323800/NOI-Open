#include <cstdio>

double a;

int main() {
	scanf("%lf", &a);
	printf("%.5lf\n", (a - 32) * 5 / 9);
	return 0;
}
