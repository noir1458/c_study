#include <stdio.h>
/* ~.c ����define, ~.h ����declaration */
int main(void)
/* �Լ� ����+����
int - ��ȯ����, void - �Ű�����
main �Լ��� ������ ���α׷��� ����, ��ȯ�ϸ� ���α׷��� ������

�� item�� �𿩼� ������ �̷�� ���� �����ݷ�����;
{} scope - ���� ������ �� ���̷� ������ ���
������ �𿩼� �Լ��� �ȴ�*/
{
	printf("Hello World\n");
	return 0;
	/*ȣ���� �Լ�(main)�� ��ȣ���� �Լ�(printf)��
	�Ű������� �ʱⰪ(���μ�)�� Ȯ���ؾ� �Ѵ�.*/
}
/*
solution �ȿ� �������� project
project build�� f7
solution build�� ctrl + shift + B
������ ctrl + f5 (run)
f5�� debug mode run
���忡�� ���� �߻��� f4������ �� ��ġ�� �ٷ� Ŀ���̵�

c >(compiler) obj >(linker) exe
*/