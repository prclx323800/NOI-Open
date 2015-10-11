#include <cstdio>

int cc, s, i;
double d;
char c[501], t;

int main() {
	scanf("%lf%*c", &d);
	for (scanf("%c", &c[cc]); c[cc] != '\n'; scanf("%c", &c[++cc]));
	for (i = 0; i < cc; i++) {
		scanf("%c", &t);
		if (c[i] == t)
			s++;
	}
	printf((1.0 * s / cc >= d) ? "yes\n" : "no\n");
	return 0;
}
