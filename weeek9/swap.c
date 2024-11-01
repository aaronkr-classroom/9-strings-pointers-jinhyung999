//swap.c
#include <stdio.h>
void Swap1(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void Swap2(int *pa, int *pb) {
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main() {
	int start = 96
		, end = 5;
	printf("Swap 1:\n");
	printf("before start = %d, end = %d\n", start, end);
	if (start > end)Swap1(start, end);
	printf("after start = % d, end = % d\n", start, end);

	printf("\nSwap 2:\n");
	printf("before start = %d, end = %d\n", start, end);
	if (start > end)Swap2(&start, &end);
	printf("after start = % d, end = % d\n", start, end);
	
}