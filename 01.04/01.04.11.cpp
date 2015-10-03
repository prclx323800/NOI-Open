#include <cstdio>

int a;

int main() {
	scanf("%d", &a);
	printf((a == 1 || a == 3 || a == 5) ? "NO\n" : "YES\n");
	return 0;
}
