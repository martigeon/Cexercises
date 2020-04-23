// Compile & run: gcc ex4.c -o ex4 && ./ex4
#include <stdio.h>

struct big_data_t {
	const char *name; // What is this?
	FILE *fp;	  // What is this?
	int data[1000];
};

// Why is this wrong, and why is this function call slow?
// Rewrite it correctly.
void edit_big_data(struct big_data_t dat) {
	dat.name = "Name";
	dat.fp = NULL;
}

int main() {
	struct big_data_t data;
	
	edit_big_data(data);

	return 0;
}
