//소인수분해
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d", &a);

	if (a <= 2)
		printf("3보다는 큰 값 입력");

	while (1)
	{
		for (b = 2; b < a; b++) {
			if (a % b == 0) {
				printf("* %d", b);
			}
			a = a / b;
			break;
		}

		if (a == 1)
			break;

	}

}