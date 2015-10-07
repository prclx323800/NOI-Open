#include <cstdio>

int n, i = 2;

int main() {
	scanf("%d", &n);
	while (n % i)
		i++;
	printf("%d\n", n / i);
	return 0;
}
