#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programming;

	printf("����, ����, ����, ��ǻ�� ���α׷��� ������ �Է��ϼ��� : ");
	scanf("%f %f %f %f", &math, &english, &science, &programming);

	ave_score = (math + english + science + programming)/4;
	printf("����� ��� ������ %f �Դϴ� \n", ave_score);
	if (ave_score >= 90) {
		printf("����� ���� �Դϴ�. ");
	}
	else if (ave_score >= 40) {
		printf(" ���ݸ� ����ϼ���!.\n");
	}
	else {
		printf("���θ� �߷� �մϱ�? \n");
	}
	return 0;
}