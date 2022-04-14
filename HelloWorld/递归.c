#include <stdio.h>

int Func(int x) {
	if (x == 1) return 1;
	return Func(x - 1) * x;
}

int main() {
	printf("%d", Func(3));
	return 0;
}