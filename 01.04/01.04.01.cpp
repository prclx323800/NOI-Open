#include <cstdio>

int a;

int main() {
	scanf("%d", &a);
	if (a > 0)
		printf("positive\n");
	else if (a == 0)
		printf("zero\n");
	else
		printf("negative\n");
	return 0;
}
