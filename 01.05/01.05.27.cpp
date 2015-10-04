#include <cstdio>

int a, b;

int main() {
	scanf("%d%d", &a, &b);
	if (a % 19 == 0) {
		while (a) {
			if (a % 10 == 3)
				b--;
			a /= 10;
		}
		if (b == 0)
			printf("YES\n");
		else
			printf("NO\n");
	} else
		printf("NO\n");
	return 0;
}
