#include <stdio.h>
#include "header.h"
//#include <ctype.h>
int getint(int *pn);

int main() {
	int b, a = 0;
	b = getint(&a);
	printf("%d\n%d\n", a, b);
}

int getint(int *pn) {
	char c;
	int sign;
	*pn = 0;
	while ((c = getch()) == ' ' || c == '\t');
	if (c - '0' > 9 || !(c - '0'))
		return 0;
	else {
		switch (c) {
			case '-': 
				sign = -1;
				break;
			case '+':
				sign = 1;
				break;
			default:
				*pn = c - '0';
				break;
		}
	}
	for (; ((c = getch()) - '0') <= 9 && c - '0' >= 0 ; *pn = *pn * 10 + (c - '0'));
	*pn *= sign;
	if (c != EOF) 
		ungetch(c);
	return 1;
}
