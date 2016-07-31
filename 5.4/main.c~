#include <stdio.h>
int strend(char*, char*);

int main() {
	char* s1 = "rakamakafo";
	char* s2 = "kafo";
	char* s3 = "sdkf";
	int a = strend(s1, s2);
	int b = strend(s1, s3);
	printf("%d\n%d\n", a, b);
}

int strend(char* s, char* t) {
	for (; *s++ ; )
		if (*s == *t)
			if (*++t)
				return 1;
	return 0;
}
