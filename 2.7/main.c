#include <stdio.h>
unsigned invert(unsigned, unsigned, unsigned);
int main() {
	unsigned a = 0x5FA2;
	a = invert(a, 3, 5);
	printf("%X\n", a);
}
unsigned invert(unsigned x, unsigned p, unsigned n) {
	unsigned a = ~0;
	a = a << n;
	a = ~a;
	a = a << p;
	x = x ^ a;
	return x;
}
