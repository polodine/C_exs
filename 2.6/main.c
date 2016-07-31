#include <stdio.h>
unsigned setbits(unsigned, unsigned, unsigned, unsigned);
int main() {
	unsigned a = 0xF6AF;
	unsigned b = 4;
	unsigned c = 6;
	unsigned d = 0x44BC;
	printf("%X\n%X\n%X\n%X\n", a, b, c, d);
	setbits(a, b, c, d);
	printf("%X\n%X\n%X\n%X\n", a, b, c, d);
}
unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y) {
	unsigned a = ~0;
	a = a << n;
	a = ~a;
	a = a << p;
	a = ~a;
	x = a & x; 
	
	// x with 0 on p+n bites
	printf("%X\n", x);
	a = ~0 << n;
	a = ~a;
	a = a & y;
	a = a << p;
	x = x | a;
	printf("%X\n", x);
}
