//피보나치수열 짝수의합
#include <stdio.h>
int main() {
	int a, b, c, ans;
	a = 1;
	b = 1;
	ans = 0;
	while (1)
	{
		c = a + b;
		a = b;
		b = c;
		if (c > 1000000)
			break;
		if (c % 2 == 0)
			ans += c;
	}
	printf("%d", ans);
}