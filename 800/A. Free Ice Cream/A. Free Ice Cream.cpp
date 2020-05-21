#include <stdio.h>

int main()
{
	
	long long icecreams;
	int distressedKids = 0;

	int actions;
	scanf_s("%d %lld", &actions, &icecreams);

	while (actions--) {
		long long value;
		char sign;
		scanf_s(" %c)",&sign);
		scanf_s("%lld)",&value);

		if (sign == '-') {
			if (icecreams < value)
				distressedKids++;
			else
				icecreams -= value;
		}
		else
			icecreams += value;
		
	}
	printf_s("%lld %d", icecreams, distressedKids);
}
