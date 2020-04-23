// Compile & run: gcc ex1.c -o ex1 && ./ex1
#include <stdio.h>

int garray[5];

int main() {
	int larray[5];

	// What will each printf statement emit?
	printf("garray[3]: %d\n", garray[3]);
	printf("larray[3]: %d\n", larray[3]);

	return 0;
}
