#include <stdio.h>

extern "C" int add(int u, int v);
int sub() {};

int main() {
	int a = 1, b = 2, c = 0;
	c = add(a, b);
	int p = sub();
	printf("%d\n", c);
}
