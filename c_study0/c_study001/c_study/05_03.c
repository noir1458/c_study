//scanf �� ����
#include <stdio.h>
int main() {
	char ch;

	short sh;
	int i;
	long lo;

	float fl;
	double du;

	printf("char �� ���� �Է� : ");
	scanf("%c", &ch);
	// �ѱ��� 2����Ʈ �̻��� �����ϹǷ� �Է½� ���� �����÷ο� �߻� (���� �޸� �̻��� ������ �Է½�)

	printf("short �� ���� �Է� : ");
	scanf("%hd", &sh);
	printf("int �� ���� �Է� : ");
	scanf("%d", &i);
	printf("long �� ���� �Է� : ");
	scanf("%ld", &lo);

	printf("float �� ���� �Է� : ");
	scanf("%f", &fl);
	printf("double �� ���� �Է� : ");
	scanf("%lf", &du);

	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %ld , float : %f ,double : %f \n", lo, fl, du);
	return 0;
}