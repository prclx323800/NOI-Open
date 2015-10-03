#include <cstdio>

int a, b;

int main() {
	scanf("%d%d", &a, &b);
	printf((a >= -1 && a <= 1 && b >= -1 && b <= 1) ? "yes\n" : "no\n");
	return 0;
}
