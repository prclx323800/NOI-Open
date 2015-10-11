#include <cstdio>

int i, t;
double a[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65}, ans;

int main() {
	for (i = 0; i <= 9; i++) {
		scanf("%d", &t);
		ans += a[i] * t;
	}
	printf("%.1lf\n", ans);
	return 0;
}
