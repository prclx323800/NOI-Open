#include <cstdio>

int a;
bool b;

int main() {
	scanf("%d", &a);
	if (a % 4 == 0)
		b = true;
	if (a % 100 == 0)
		b = false;
	if (a % 400 == 0)
		b = true;
	printf(b ? "Y\n" : "N\n");
	return 0;
}
