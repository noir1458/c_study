//1~19 합
#include <stdio.h>
int main() {
	int i, sum = 0;
	for (i = 0; i <= 10000; ++i) {
		sum = sum + i;
	}
	printf("1 부터 10000 까지의 합 : %d", sum);
	return 0;
}