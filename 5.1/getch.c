#include <stdio.h>
#include "header.h"
char buffer[MAXBUFF];
int step = 0;

char getch(void) {
	return (step > 0) ? buffer[--step] : getchar();
}

void ungetch(char characterToBuffer) {
	buffer[step++] = characterToBuffer;
}
