//1���� n���� ��
#include <stdio.h>
int main() {
	int a, b, c;
	a = 1;
	scanf("%d", &c);

	for (b = 1; b < c + 1; b++) {
		a *= b;
	}
	printf("%d", a);
}