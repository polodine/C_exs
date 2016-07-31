#include <stdio.h>
#include "header.h"

int step = 0;
char buff[MAXBUFF];

char getch() {
	return (step > 0) ? buff[--step] : getchar();
}

void ungetch(char toBuffer) {
	if (step == MAXBUFF) 
		printf("no fspace for your char\n");
	else
		buff[step++] = toBuffer;
}
