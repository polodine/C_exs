#include <stdio.h>
void strcaten(char*, char*);

int main() {
	char s1[20] = "The Big ";
	char* s2 = "Brother";
	strcaten(s1, s2);
	printf("%s\n", s1);
}

void strcaten(char* s1, char* s2) {
	if (*s1)
		while (*++s1);
	while ((*s1++ = *s2++));
}
