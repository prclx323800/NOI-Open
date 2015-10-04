#include <cstdio>

int n, a, b, c, i, t;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &t);
		if (t == 1)
			a++;
		else if (t == 5)
			b++;
		else if (t == 10)
			c++;
	}
	printf("%d\n%d\n%d\n", a, b, c);
	return 0;
}
