#include <cstdio>

int n, a, b, c, d, i, t;
double e, f, g, h;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &t);
		if (t <= 18)
			a++;
		else if (t <= 35)
			b++;
		else if (t <= 60)
			c++;
		else
			d++;
	}
	e = 100.0 * a / n;
	f = 100.0 * b / n;
	g = 100.0 * c / n;
	h = 100.0 * d / n;
	printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%\n", e, f, g, h);
	return 0;
}
