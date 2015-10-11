#include <cstdio>

int i;
char c[101];

int main() {
	for (scanf("%c", &c[i]); c[i] != '\n'; scanf("%c", &c[++i]));
	for (i = 0; c[i + 1] != '\n'; i++)
		printf("%c", c[i] + c[i + 1]);
	printf("%c\n", c[i] + c[0]);
	return 0;
}
