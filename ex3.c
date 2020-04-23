// Compile & run: gcc ex3.c -o ex3 && ./ex3
#include <stdio.h>

void clear_array(int *arr) {
	if (!arr) return; // What does this statement do?

	// Clear the array using pointer arithmetic.
}

int main() {
	int array[5];

	clear_array(array);

	return 0;
}
