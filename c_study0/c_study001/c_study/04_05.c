// 1�� ���ϴ� ���
#include <stdio.h>
int main() {
	int a = 1, b = 1, c = 1, d = 1;

	a = a + 1;
	printf("a : %d \n", a);
	b += 1;	// ���մ��Կ���
	printf("b : %d \n", b);
	++c;	//������ prefix
	printf("c : %d \n", c);
	d++;	//������ postfix
	printf("d : %d \n", d);

	return 0;
}