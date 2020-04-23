// Compile & run: gcc ex5.c -o ex5 && ./ex5
// File created with `seq 0 99 > data.txt`
#include <stdlib.h>
#include <stdio.h>

void read_data(FILE *fp, int *arr) {
	// What does fscanf return?
	// Why does the while statement not have a body?
	// What if arr++ was changed to ++arr ?
	// How could you check the bounds of the inserted array?
	while (fscanf(fp, "%d\n", arr++) > 0);
}

int main() {
	FILE *fp = fopen("data.txt", "r"); // What is the second argument?
	if (!fp) exit(1); // What would be a clearer way of writing the condition?

	int arr[100];
	read_data(fp, arr);

	for (int i = 0; i < 100; ++i) printf("%d, ", arr[i]);
	printf("\n");

	return 0;
}
