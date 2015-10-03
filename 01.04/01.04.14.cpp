#include <cstdio>
#include <cmath>

int a, b = 8;
char c;

int main() {
	scanf("%d%*c%c", &a, &c);
	if (a > 1000)
		b += ceil((a - 1000.0) / 500) * 4;
	if (c == 'y')
		b += 5;
	printf("%d\n", b);
	return 0;
}
