#include <cstdio>
#include <cmath>

float a, b, c, d, e, f;
double g, h, i, j;

int main() {
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
	g = sqrt((c - a) * (c - a) + (d - b) * (d - b));
	h = sqrt((e - a) * (e - a) + (f - b) * (f - b));
	i = sqrt((e - c) * (e - c) + (f - d) * (f - d));
	j = (g + h + i) / 2;
	printf("%.2lf\n", sqrt(j * (j - g) * (j - h) * (j - i)));
	return 0;
}
