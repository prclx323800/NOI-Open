#include <cstdio>

int ans;
char c;

int main() {
	for (scanf("%c", &c); c != '\n'; scanf("%c", &c))
		if (c >= '0' && c <= '9')
			ans++;
	printf("%d\n", ans);
	return 0;
}
