#include <cstdio>

int n, i;
char c1[9], c2[9];

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%s%s", c1, c2);
		if (c1[0] == c2[0])
			printf("Tie\n");
		else if ((c1[0] == 'R' && c2[0] == 'S') || (c1[0] == 'S' && c2[0] == 'P') || (c1[0] == 'P' && c2[0] == 'R'))
			printf("Player1\n");
		else
			printf("Player2\n");
	}
	return 0;
}
