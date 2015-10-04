#include <cstdio>

int n, m, i, j;
bool a[5001], first_out = true;

int main() {
	scanf("%d%d", &n, &m);
	for (i = 2; i <= m; i++)
		for (j = 1; j <= n; j++)
			if (j % i == 0)
				a[j] = !a[j];
	for (i = 1; i <= n; i++)
		if (!a[i]) {
			if (first_out)
				first_out = false;
			else
				printf(",");
			printf("%d", i);
		}
	printf("\n");
	return 0;
}
