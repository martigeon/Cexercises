// Compile & run: gcc ex5.c -o ex5 && ./ex5
// File created with `seq 0 99 > data.txt`
#include <stdlib.h>
#include <stdio.h>

// What does this do?
// What does fscanf return, how does it change *fp?
// Can you access member variables of *fp?
// What if *arr++ was changed to *++arr or ++*arr ?
// How could you check the bounds of the inserted array?
void do_stuff(FILE *fp, int *arr) {
	while (fscanf(fp, "%d\n", arr) > 0)
		printf("%d, ", *arr++);
	printf("\n");
}

int main() {
	int arr[100];
	FILE *fp; 

	fp = fopen("data.txt", "r"); // What is the second argument?

	if (fp)	do_stuff(fp, arr);

	fclose(fp);
	return 0;
}
