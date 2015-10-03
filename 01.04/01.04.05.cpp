#include <cstdio>

long long a, b;

int main() {
	scanf("%lld%lld", &a, &b);
	if (a > b)
		printf(">\n");
	else if (a == b)
		printf("=\n");
	else
		printf("<\n");
	return 0;
}
