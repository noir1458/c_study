//���հ� ������
#include <stdio.h>
int main() {
	int height, weight;
	printf("����� Ű�� �����Ը� ���� �Է��� �ּ��� : ");
	scanf("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("����� '�ű�' �Դϴ�.\n");
	}
	if (!(height >= 190 || weight >= 100)) {
		printf("����� �ű��� �ƴմϴ�. \n");
	}
	return 0;
}
// ! �����ڴ� 0�� �ƴѰ��� 0���� ��ȯ���شٴ� Ư���� �ִ�.
// if(!p) // p == 0�� ���� �ǹ̰� �ȴ�. 0�϶��� ����