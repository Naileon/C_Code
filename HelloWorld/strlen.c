#include <stdio.h>

int strlen(char* arr) {
	if (*arr != '\0')
		return 1 + strlen(arr + 1);
	return 0;
}

int main() {
	char string1[] = "My lenth is:";
	char string2[] = "ÎÒ³¤";
	char string3[] = "M";
	int len1 = strlen(string1);
	int len2 = strlen(string2);
	int len3 = strlen(string3);
	printf("%d\n%d\n%d", len1,len2,len3);
}