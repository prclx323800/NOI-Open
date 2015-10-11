#include <cstdio>

int n, a[66], b[66] = {1, 1}, i, j;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = b[0]; j >= 1; j--)
			b[j] *= i;
		for (j = 1; j <= b[0]; j++) {
			if (b[j] >= 10) {
				b[j + 1] += b[j] / 10;
				b[j] %= 10;
				if (j + 1 > b[0])
					b[0] = j + 1;
			}
			a[j] += b[j];
		}
		if (a[0] < b[0])
			a[0] = b[0];
		for (j = 1; j <= a[0]; j++)
			if (a[j] >= 10) {
				a[j] -= 10;
				a[j + 1]++;
				if (j + 1 > a[0])
					a[0] = j + 1;
			}
	}
	for (i = a[0]; i >= 1; i--)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}
