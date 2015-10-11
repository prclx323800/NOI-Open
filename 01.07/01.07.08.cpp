#include <cstdio>

char c;

int main() {
	while (scanf("%c", &c) != EOF && c != '\n')
		if ((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z'))
			printf("%c", c + 1);
		else if (c == 'Z' || c == 'z')
			printf("%c", c - 25);
		else
			printf("%c", c);
	printf("\n");
	return 0;
}
