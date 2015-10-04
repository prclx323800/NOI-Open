#include <cstdio>

int a;

int main() {
	scanf("%d", &a);
	printf("%d", a % 10);
	a /= 10;
	while (a) {
		printf(" %d", a % 10);
		a /= 10;
	}
	printf("\n");
	return 0;
}
