//���μ�����
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d", &a);

	if (a <= 2)
		printf("3���ٴ� ū �� �Է�");

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