#include <cstdio>

char c;

int main() {
	while (scanf("%c", &c) != EOF && c != '\n')
		if (c == 'A')
			printf("T");
		else if (c == 'T')
			printf("A");
		else if (c == 'C')
			printf("G");
		else
			printf("C");
	return 0;
}
