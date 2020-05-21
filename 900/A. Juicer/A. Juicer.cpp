#include <stdio.h>
using namespace std;
int main() {
	int n, b, d; scanf_s("%d %d %d\n", &n, &b, &d);
	int collecter = 0;
	int wasteCollecter = 0;
	while (n--) {
		int orangeSize; scanf_s("%d",&orangeSize);
		if (orangeSize <= b) {
			collecter += orangeSize;
			if (collecter > d) {
				collecter = 0;
				wasteCollecter++;
			}
		}
	}
	printf_s("%d",wasteCollecter);

}