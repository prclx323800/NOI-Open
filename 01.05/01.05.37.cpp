#include <cstdio>

int a, b, d, i, j;
char c;

int main() {
	scanf("%d%d%*c%c%d", &a, &b, &c, &d);
	for (i = 1; i <= b; i++)
		printf("%c", c);
	printf("\n");
	for (i = 2; i < a; i++) {
		printf("%c", c);
		for (j = 2; j < b; j++)
			if (d)
				printf("%c", c);
			else
				printf(" ");
		printf("%c\n", c);
	}
	for (i = 1; i <= b; i++)
		printf("%c", c);
	printf("\n");
	return 0;
}
