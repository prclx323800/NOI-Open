#include <cstdio>

int n, ans, i;
char t1, t2, t3, t4;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%*c%c%c%c%c", &t1, &t2, &t3, &t4);
		if ((t4 - '0') - (t1 - '0') - (t2 - '0') - (t3 - '0') > 0)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
