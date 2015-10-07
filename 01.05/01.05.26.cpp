#include <cstdio>

int cc, i;
char c[11];
bool first_out = true;

int main() {
	do {
		scanf("%c", &c[cc]);
	} while (c[cc++] != '\n');
	if (c[0] == '-')
		printf("-");
	for (i = cc - 2; i >= 0; i--)
		if (c[i] != '-' && (!first_out || c[i] != '0')) {
			printf("%c", c[i]);
			first_out = false;
		}
	printf("\n");
	return 0;
}
