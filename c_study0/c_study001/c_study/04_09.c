//음수가 없는 자료형의 오버플로우
#include <stdio.h>
int main() {
	unsigned int b = -1;
	printf("b에 들어있는 값을 unsigned int 로 해석했을때 값 : %u \n", b);

	unsigned int c = 4294967295;
	printf("c : %u \n", c);

	c++;
	printf("c : %u \n", c);

	return 0;
}