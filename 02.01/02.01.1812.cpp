#include <cstdio>

int n, pre[101], i1, i2, i3, i4, t2, t3, t4;

int main() {
	for (i1 = 2; i1 <= 100; i1++)
		pre[i1] = i1 * i1 * i1;
	scanf("%d", &n);
	for (i1 = 2; i1 <= n; i1++)
		for (i2 = 2; i2 <= i1; i2++)
			for (i3 = i2; i3 <= i1; i3++) {
				t3 = pre[i2] + pre[i3];
				if (t3 >= pre[i1])
					break;
				for (i4 = i3; i4 <= i1; i4++) {
					t4 = t3 + pre[i4];
					if (t4 == pre[i1])
						printf("Cube = %d, Triple = (%d,%d,%d)\n", i1, i2, i3, i4);
					if (t4 >= pre[i1])
						break;
				}
			}
	return 0;
}
