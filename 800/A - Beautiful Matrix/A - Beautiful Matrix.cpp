#include <stdio.h>

int abs(int&& nr) {
	if (nr < 0)  nr = -nr;
	return nr;
}

#define SIZE 5
int main() {

	bool buffer;
	int pos = 0;
	do {
		scanf_s("%d ", &buffer);
		pos++;
	} while (buffer == 0);
	printf_s("%d", abs((pos / SIZE + 1 - (pos % SIZE == 0)) - 3) + abs((pos % SIZE + SIZE * (pos % SIZE == 0)) - 3));
}