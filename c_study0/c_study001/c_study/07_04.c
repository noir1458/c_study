//break
#include <stdio.h>
int main() {
	int usranswer;

	printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������! \n");

	for (;;) {
		scanf("%d", &usranswer);
		if (usranswer == 3) {
			printf("���߼̱���! \n");
			break;
		}
		else
		{
			printf("Ʋ�Ⱦ��! \n");
		}
	}
	return 0;
}