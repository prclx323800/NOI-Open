#include <cstdio>

double a;

int main() {
	scanf("%lf", &a);
	printf("%.2lf\n", a >= 0 ? a : -a);
	return 0;
}
