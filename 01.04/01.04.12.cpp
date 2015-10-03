#include <cstdio>

int a;
double b, c;

int main() {
	scanf("%d", &a);
	b = 50 + 1.0 * a / 3;
	c = a / 1.2;
	if (b < c)
		printf("Bike\n");
	else if (b == c)
		printf("All\n");
	else
		printf("Walk\n");
	return 0;
}
