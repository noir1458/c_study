// 1을 더하는 방법
#include <stdio.h>
int main() {
	int a = 1, b = 1, c = 1, d = 1;

	a = a + 1;
	printf("a : %d \n", a);
	b += 1;	// 복합대입연산
	printf("b : %d \n", b);
	++c;	//전위형 prefix
	printf("c : %d \n", c);
	d++;	//후위형 postfix
	printf("d : %d \n", d);

	return 0;
}