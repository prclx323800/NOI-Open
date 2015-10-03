#include <cstdio>

int a;

int main() {
	scanf("%d", &a);
	printf(a % 15 ? "NO\n" : "YES\n");
	return 0;
}
