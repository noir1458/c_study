//switch��
//switch ���� ���� �����͸� ó���Ѵ�.
//����� case�� '���ĺ�'�� ���� �Ǻ� �����ϴ�
//��?? - ��ǻ�ʹ� ���ڿ� ���ڸ� �������� ���ϴϱ�

#include <stdio.h>
int main() {
	int input;
	printf("1. ���ֱ� \n");
	printf("2. �ı�� \n");
	printf("3. ���� \n");

	scanf("%d", &input);

	switch (input)
	{
		case 1:
			printf("���վ�\n");
			break;
		case 2:
			printf("�ÿ���\n");
			break;
		case 3:
			printf("zzz\n");
			break;
		default:
			printf("���˾Ƶ�ھ�\n");
			break;
	}
	return 0;
}