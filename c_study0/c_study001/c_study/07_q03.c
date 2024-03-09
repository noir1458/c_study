#include <stdio.h>
int main() {
	int i,a = 0;
	for (i = 1; i <= 1000; i++) {
		if (i % 3 == 0)
			a += i;
		if (i % 5 == 0)
			a += i;
	}
	printf("%d", i);
}