#include <cstdio>

int i, t1, t2, t3, t4, t5, t6, t7;

int main() {
	for (i = 81; i <= 2400; i++) {
		t4 = i % 7;
		t1 = i / 7;
		t3 = t1 % 7;
		t2 = t1 / 7;
		t7 = i % 9;
		t1 = i / 9;
		t6 = t1 % 9;
		t5 = t1 / 9;
		if (t2 == t7 && t3 == t6 && t4 == t5) {
			printf("%d\n%d%d%d\n%d%d%d\n", i, t2, t3, t4, t5, t6, t7);
			break;
		}
	}
	return 0;
}
