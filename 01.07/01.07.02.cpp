#include <cstdio>

int a[26], cc, i;
char c[100001];

int main() {
	for (scanf("%c", &c[cc]); c[cc] != '\n'; scanf("%c", &c[++cc]))
		a[c[cc] - 'a']++;
	for (i = 0; i <= cc; i++)
		if (a[c[i] - 'a'] == 1) {
			printf("%c\n", c[i]);
			return 0;
		}
	printf("no\n");
	return 0;
}
