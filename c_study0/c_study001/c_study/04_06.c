//prefix,postfix
#include <stdio.h>
int main() {
	int a = 1;

	printf("++a : %d \n", ++a);

	a = 1;
	printf("a++ : %d \n", a++);
	printf("a : %d \n", a);

	return 0;
}
//�������� ���� 1�� ������ ����� �����ְ�
//�������� ����� ������ �� 1�� ���Ѵ�

//1�� ���ϴ� 4���� ������ ���� �������� a++
// a = a + 1�� ADD a 1 �� ������, a++�� INC a�� �� ���� ���ȴ�