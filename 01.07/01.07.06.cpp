#include <cstdio>

char c;

int main() {
	scanf("%c", &c);
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == '_')) {
		printf("no\n");
		return 0;
	}
	while (scanf("%c", &c) != EOF && c != '\n')
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '_')) {
			printf("no\n");
			return 0;
		}
	printf("yes\n");
	return 0;
}
