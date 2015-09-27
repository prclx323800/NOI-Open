#include <cstdio>

float a, b, c;

int main() {
	scanf("%f%f", &a, &b);
	c = 1.0 / (1.0 / a + 1.0 / b);
	printf("%.2f\n", c);
	return 0;
}
