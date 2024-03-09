//산술연산
#include <stdio.h>
int main() {
	int a, b;
	a = 10;
	b = 3;
	// 뒤에서부터 해석한다
	// a=5;b=5;c=5;d=5; 는
	// a=b=c=d=5; 와 같은 문장
	printf("a + b 는 : %d \n", a + b);
	printf("a - b 는 : %d \n", a - b);
	printf("a * b 는 : %d \n", a * b);
	printf("a / b 는 : %d \n", a / b);
	printf("a %% b 는 : %d \n", a % b);
	return 0;
}