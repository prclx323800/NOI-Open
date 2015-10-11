#include <cstdio>

int a[201], b[201], *x, *y, i1, i2;
char c;
bool first_out = true;

int main() {
	for (scanf("%c", &c); c != '\n'; scanf("%c", &c))
		a[++a[0]] = c - '0';
	for (scanf("%c", &c); c != '\n'; scanf("%c", &c))
		b[++b[0]] = c - '0';
	if (a[0] > b[0])
		x = a, y = b;
	else
		x = b, y = a;
	for (i1 = x[0], i2 = y[0]; i2; i1--, i2--)
		x[i1] += y[i2];
	for (i1 = x[0]; i1 >= 2; i1--)
		if (x[i1] >= 10 && i1 >= 2) {
			x[i1] -= 10;
			x[i1 - 1]++;
		}
	for (i1 = 1; i1 <= x[0]; i1++)
		if (first_out && x[i1] != 0) {
			printf("%d", x[i1]);
			first_out = false;
		} else if (!first_out)
			printf("%d", x[i1]);
	if (first_out)
		printf("0");
	printf("\n");
	return 0;
}
