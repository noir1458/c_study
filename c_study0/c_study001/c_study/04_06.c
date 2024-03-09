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
//전위형은 먼저 1을 더한후 결과를 돌려주고
//후위형은 결과를 돌려준 후 1을 더한다

//1을 더하는 4가지 연산중 가장 빠른것은 a++
// a = a + 1은 ADD a 1 로 하지만, a++은 INC a로 더 빨리 계산된다