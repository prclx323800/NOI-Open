#include <cstdio>

int a, b;

int main() {
	scanf("%d%d", &a, &b);
	printf((a >= 10 || b >= 20) ? "1\n" : "0\n");
	return 0;
}
