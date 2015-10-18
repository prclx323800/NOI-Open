#include <cstdio>

int n, c, i1, i2, i3, t1, t2, t3;

int main() {
	scanf("%d", &n);
	for (i3 = 0; i3 <= n; i3++) {
		t3 = i3 * 5;
		if (t3 > n)
			break;
		for (i2 = 0; i2 <= n; i2++) {
			t2 = t3 + i2 * 2;
			if (t2 > n)
				break;
			for (i1 = 0; i1 <= n; i1++) {
				t1 = t2 + i1;
				if (t1 == n)
					printf("%03d%12d%12d%12d\n", ++c, i1, i2, i3);
				if (t1 >= n)
					break;
			}
		}
	}
	return 0;
}
