#include <stdio.h>

void binprint(unsigned n) {
	if (n > 1)
		binprint(n >> 1);
	printf("%u", n & 1);
}

int main(void) {
	unsigned n;

	while (printf("\nNumber: ") && scanf("%u", &n) == 1 && printf("Binary form: "))
		binprint(n);

	return 0;
}