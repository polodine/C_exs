#include <stdio.h>
#include "header.h"

int main() {
	float a = 0;
	int result = getFloat(&a);
	printf("%f\n%d\n", a, result);
}

int getFloat(float* num) {
	char c;
	int sign = 1, dot = 0;
	float order = 0.1;
	*num = 0;
	printf("%d\n", sign);
	
	while ((c = getch()) == ' ' || c == '\t');
	
	if (!(c - '0') || c - '0' > 9)
		return -1;
	else {
		switch(c) {
			case '-':
				sign = -1;
				break;
			case '+':
				sign = 1;
				break;
			case '.':
				dot = 1;
				order /= 10;
				break;
			default:
				*num = c - '0';
				break;
		}
	}
	
	for (; ((c = getch()) - '0' <= 9 && c - '0' >= 0) || (c == '.' && !dot) ; ) {
		if (c == '.')
			dot = 1;
		else if (!dot) {
			*num = *num * 10 + (c - '0');
		}
		else { 
			*num += (c - '0') * order;
			order /= 10;
			dot = 1;
		}
	}
	
	if (c != EOF)
		ungetch(c);
	
	*num *= sign;
	
	return 1;
}
