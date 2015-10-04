#include <cstdio>

long long a;

int main() {
	scanf("%lld", &a);
	while (a != 1) {
		if (a % 2) {
			printf("%lld*3+1=", a);
			a = a * 3 + 1;
		} else {
			printf("%lld/2=", a);
			a /= 2;
		}
		printf("%lld\n", a);
	}
	printf("End\n");
	return 0;
}
