//
#include <stdio.h>
int main() {
	int a, b, c, cnt1;
	cnt1 = 0;
	for (a = 2000; a > 1; a--) {
		for (b = 2000; b > 1; b--) {
			for (c = 2000; c > 1; c--) {
				if (a + b + c == 2000)
					cnt1++;
			}
		}
	}
	printf("%d", cnt1);

}