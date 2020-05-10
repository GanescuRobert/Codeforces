#include <stdio.h>
int main() {
	int problemsNumber; scanf("%d", &problemsNumber);
	int solver1;
	int solver2;
	int solver3;
	int ans = 0;
	while (problemsNumber--) {
		scanf("%d %d %d", &solver1, &solver2, &solver3);
		ans += solver1 + solver2 + solver3 > 1;
	}
	printf("%d", ans);
}