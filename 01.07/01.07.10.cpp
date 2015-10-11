#include <cstdio>

int cc, i;
char c[50];

int main() {
	while (scanf("%c", &c[cc]) != EOF && c[cc++] != '\n');
	for (i = cc - 2; i >= 0; i--) {
		if ((c[i] >= 'X' && c[i] <= 'Z') || c[i] >= 'x')
			c[i] -= 26;
		c[i] += 3;
		if (c[i] <= 'Z')
			c[i] += 'a' - 'A';
		else
			c[i] -= 'a' - 'A';
		printf("%c", c[i]);
	}
	printf("\n");
	return 0;
}
