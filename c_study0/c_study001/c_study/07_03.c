//for�� ����
#include <stdio.h>
int main() {
	int i;
	int subject, score;
	double sum_score = 0;

	printf("�� ���� ���� ������ �Է� ���� ���ΰ���?");
	scanf("%d", &subject);

	printf("\n �� ������ ������ �Է��� �ּ��� \n");
	for (i = 1; i <= subject; i++) {
		printf("���� %d : ", i);
		scanf("%d", &score);
		sum_score = sum_score + score;
	}
	printf("��ü ������ ����� : %.2f \n", sum_score / subject);
	return 0;
}