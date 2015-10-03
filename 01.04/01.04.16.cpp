#include <cstdio>

int a, b, c;

int main() {
	scanf("%d%d%d", &a, &b, &c);
	printf((a + b > c && a + c > b && b + c > a) ? "yes\n" : "no\n");
	return 0;
}
