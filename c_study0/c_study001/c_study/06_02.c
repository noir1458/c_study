#include <stdio.h>
int main() {
	double i, j;
	printf("������ ���� �� ������ �Է��ϼ��� : ");
	scanf("%lf %lf", &i, &j);

	if (j == 0) {
		printf("0���� ���� �� �����ϴ�. \n");
		return 0;
	}
	printf("%f�� %f�� ���� ����� : %f \n", i, j, i / j);
	return 0;
}