#include <cstdio>

int a, b;

int main() {
	scanf("%d%d", &a, &b);
	printf(((a < 60 && b >= 60) || (a >= 60 && b < 60)) ? "1\n" : "0\n");
	return 0;
}
